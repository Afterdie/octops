from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import passcode, set_doors

Builder.load_file('screenLayout/doors_screen.kv')
sound = SoundLoader.load('assets/audio/doors_roger.wav')
#defining a class for doorscreen
class DoorsScreen(Screen):
    verified = False#initially setting it to false to later check if it turns true or not
    
    #increasing the value of the label counter in the game as needed. adding 1 at a time
    #resetting it to 0 once it reaches 9
    def increment_value(self, label_index):
        if(int(label_index.text) == 9):
            label_index.text = "0"
        else:
            label_index.text = f"{int(label_index.text) + 1}"
        DoorsScreen.verify(self)

    #decreasing the value of the label counter in the game as needed. decreasing 1 at a time
    #resetting it to 9 once it reaches 0
    def decrement_value(self, label_index):
        if(int(label_index.text) == 0):
            label_index.text = "9"
        else:
            label_index.text = f"{int(label_index.text) - 1}"
        DoorsScreen.verify(self)

    #checking if the entered label is equal to the passcode saved in screen_check.py is same or not
    #if same, then changing bool verified to true, and playinf the exit sounds and making the background screen opaque
    def verify(self):
        code = passcode == int(self.ids.label_1.text + self.ids.label_2.text + self.ids.label_3.text + self.ids.label_4.text)
        if not DoorsScreen.verified and code:
            DoorsScreen.verified = True
            self.ids.splash_bg.opacity = 0
            self.ids.splash_bg_after.opacity = 1
            set_doors()
            sound.play()