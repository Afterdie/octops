from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import passcode, set_doors

Builder.load_file('screenLayout/doors_screen.kv')
sound = SoundLoader.load('assets/audio/doors_roger.wav')
class DoorsScreen(Screen):
    verified = False

    # This method checks if the current value of the label is 9, if it is, then it sets the value of the label to 0.
    def increment_value(self, label_index):
        if(int(label_index.text) == 9):
            label_index.text = "0"
        else:
            label_index.text = f"{int(label_index.text) + 1}"
        # After every decrement, checks if the resulting passcode is correct or not.
        DoorsScreen.verify(self)

    # This method checks if the current value of the label is 0, if it is, then it sets the value of the label to 9.
    def decrement_value(self, label_index):
        if(int(label_index.text) == 0):
            label_index.text = "5"
        else:
            label_index.text = f"{int(label_index.text) - 1}"
        # After every decrement, checks if the resulting passcode is correct or not.
        DoorsScreen.verify(self)

    # First checks if the passcode entered is correct. Its calculated by concatenating the text values of four label objects.
    def verify(self):
        code = passcode == int(self.ids.label_1.text + self.ids.label_2.text + self.ids.label_3.text + self.ids.label_4.text)
        # If the passcode is correct, then DoorsScreen.verify is set True.
        if not DoorsScreen.verified and code:
            DoorsScreen.verified = True
            self.ids.splash_bg.opacity = 0      # background splash image is faded out
            self.ids.splash_bg_after.opacity = 1        # background splash image after is faded in.
            set_doors()     # set_doors() is called indicating the level is cleared.
            sound.play()    # sound is played.