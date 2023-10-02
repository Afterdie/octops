from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

# Import functions from another module (screen_check.py)

from .screen_check import passcode, set_doors

# Load the Kivy UI layout from a .kv file

Builder.load_file('screenLayout/doors_screen.kv')
sound = SoundLoader.load('assets/audio/doors_roger.wav')
class DoorsScreen(Screen):

     # Class-level variable to track whether the passcode has been verified
    verified = False

    # Function to increment the value of a label_index (a label in the UI) 

    def increment_value(self, label_index):

        # Check if the current label_index value is 5

        if(int(label_index.text) == 5):

            # If it's 5, set it to 0

            label_index.text = "0"
        else:

            # Otherwise, increment it by 1

            label_index.text = f"{int(label_index.text) + 1}"

            # Call the verify function to check if the passcode is correct
        DoorsScreen.verify(self)
 # Function to decrement the value of a label_index (a label in the UI)
    def decrement_value(self, label_index):

         # Check if the current label_index value is 0

        if(int(label_index.text) == 0):

            # If it's 0, set it to 5

            label_index.text = "5"
        else:

            # Otherwise, decrement it by 1

            label_index.text = f"{int(label_index.text) - 1}"

             # Call the verify function to check if the passcode is correct

        DoorsScreen.verify(self)

        # Function to verify the entered passcode

    def verify(self):

         # Concatenate the values of four labels to form the entered code
        code = passcode == int(self.ids.label_1.text + self.ids.label_2.text + self.ids.label_3.text + self.ids.label_4.text)

                # Check if the code is correct and if verification hasn't occurred before

        if not DoorsScreen.verified and code:

             # Mark the passcode as verified

            DoorsScreen.verified = True

            # Update the UI elements to indicate successful verification

            self.ids.splash_bg.opacity = 0
            self.ids.splash_bg_after.opacity = 1

             # Call the set_doors function to perform additional actions

            set_doors()

            # Play the loaded sound
            
            sound.play()