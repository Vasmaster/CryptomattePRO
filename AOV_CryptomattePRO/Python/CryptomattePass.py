import unreal
import OpenEXR
import Imath
import array

class CryptomattePassPro(unreal.MovieRenderPipelineCustomPass):
    def setup(self):
        # Set up the custom render pass
        self.layer_name = "CryptomattePass"
        self.color_map = {}

    def execute(self, output, output_directory):
        # Define the path where the EXR files will be saved
        output_path = output_directory
        # Get a reference to the actor manager
        actor_manager = unreal.EditorUtilityLibrary.find_actor_by_class(None, unreal.Blueprint.Load("/Game/MyProject/BP_Scene_ActorManager.BP_Scene_ActorManager_C"))

         # Iterate through all actors in the scene
        for actor in unreal.EditorLevelLibrary.get_all_level_actors():
    # Check if the actor has tags and if the last tag matches any of the tags in the manager
         if hasattr(actor, "Tags") and actor.Tags:
             last_tag = actor.Tags[-1]
         if last_tag in actor_manager.TagsList:
            # Get the index of the last tag in the manager's tags list
            tag_index = actor_manager.TagsList.index(last_tag)

            # Get the color from the manager's color list using the tag index
            color = actor_manager.TaggedColor[tag_index]

            # Create a custom render pass for the actor
            render_pass = CryptomattePassPro()

            # Set the name of the render pass to the actor's name
            render_pass.set_name(actor.get_name())

            # Set the cryptomatte layer name to the actor's tag
            render_pass.set_cryptomatte_layer_name(last_tag)

            # Set the color in the render pass
            render_pass.set_color(color)

            # Write the render pass to a separate EXR file
            file_path = output_path + actor.get_name() + ".exr"
            unreal.OpenExrLibrary.write_exr_file(file_path, [render_pass], None)
            
        # Write the color map to the custom render pass
        custom_pass_output = output.find_named_element(self.layer_name)
        if custom_pass_output:
            for actor_tag, colors in self.color_map.items():
                # Combine the colors into a single array
                pixels = array.array('f', [])
                for color in colors:
                    pixels.extend([color.r, color.g, color.b])

                # Create an OpenEXR header for the cryptomatte layer
                header = OpenEXR.Header()
                header['channels'] = {'R': Imath.Channel(Imath.PixelType(Imath.PixelType.FLOAT))}
                header['cryptomatte/name'] = actor_tag

                # Write the pixels to a new OpenEXR file
                exr_file = OpenEXR.OutputFile(custom_pass_output.get_path() + "/" + actor_tag + ".exr", header)
                exr_file.writePixels({'R': pixels})

                # Close the file
                exr_file.close()