from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import passcode, set_doors

Builder.load_file('screenLayout/doors_screen.kv')
sound = SoundLoader.load('assets/audio/doors_roger.wav')
class DoorsScreen(Screen):
    verified = False

    def increment_value(self, label_index):
        if(int(label_index.text) == 9):
            label_index.text = "0"
        else:
            label_index.text = f"{int(label_index.text) + 1}"
        DoorsScreen.verify(self)

    def decrement_value(self, label_index):
        if(int(label_index.text) == 0):
            label_index.text = "5"
        else:
            label_index.text = f"{int(label_index.text) - 1}"
        DoorsScreen.verify(self)

    def verify(self):
        code = passcode == int(self.ids.label_1.text + self.ids.label_2.text + self.ids.label_3.text + self.ids.label_4.text)
        if not DoorsScreen.verified and code:
            DoorsScreen.verified = True
            self.ids.splash_bg.opacity = 0
            self.ids.splash_bg_after.opacity = 1
            set_doors()
            sound.play()