# Import necessary modules and classes
from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

# Import functions from another module
from .screen_check import passcode, set_doors

# Load the Kivy layout file for the DoorsScreen
Builder.load_file('screenLayout/doors_screen.kv')

# Load a sound file for later use
sound = SoundLoader.load('assets/audio/doors_roger.wav')

# Define a class named DoorsScreen that inherits from the Screen class
class DoorsScreen(Screen):
    # Initialize a class variable 'verified' to False
    verified = False

    # Function to increment the value of a label
    def increment_value(self, label_index):
        if int(label_index.text) == 9:
            label_index.text = "0"
        else:
            label_index.text = f"{int(label_index.text) + 1}"
        # Call the 'verify' method to check if the passcode is correct
        DoorsScreen.verify(self)

    # Function to decrement the value of a label
    def decrement_value(self, label_index):
        if int(label_index.text) == 0:
            label_index.text = "5"
        else:
            label_index.text = f"{int(label_index.text) - 1}"
        # Call the 'verify' method to check if the passcode is correct
        DoorsScreen.verify(self)

    # Function to verify the passcode
    def verify(self):
        # Concatenate the values of four labels to form a passcode and compare it with the stored passcode
        code = passcode == int(self.ids.label_1.text + self.ids.label_2.text + self.ids.label_3.text + self.ids.label_4.text)
        # Check if the passcode is correct and the screen hasn't been verified yet
        if not DoorsScreen.verified and code:
            # Mark the screen as verified
            DoorsScreen.verified = True
            # Make changes to the UI by changing the opacity of certain elements
            self.ids.splash_bg.opacity = 0
            self.ids.splash_bg_after.opacity = 1
            # Call the 'set_doors' function to perform additional actions
            set_doors()
            # Play the loaded sound
            sound.play()
