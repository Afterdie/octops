from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import slider, set_spawn

Builder.load_file('screenLayout/spawn_screen.kv')
sound = SoundLoader.load('assets/audio/spawn_sticktog.wav')
class SpawnScreen(Screen):
    verified = False

    def slider_val_change(self):
        if not SpawnScreen.verified and ((self.ids.slide1.value < slider[0]+5) and (self.ids.slide1.value > slider[0]-5 )) and ((self.ids.slide2.value < slider[1]+5)and ( self.ids.slide2.value > slider[1]-5 )) and ((self.ids.slide3.value < slider[2]+5) and (self.ids.slide3.value > slider[2]-5 )):
            SpawnScreen.verified = True
            self.ids.splash_bg.opacity = 0
            self.ids.splash_bg_after.opacity = 1
            sound.play()
            set_spawn()