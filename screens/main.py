from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader
import webbrowser

from .screen_check import get_time

Builder.load_file('screenLayout/main_screen.kv')

sound = SoundLoader.load('assets/audio/main_gogo.wav')
if sound:
    sound.play()
class MainScreen(Screen):
    
    def on_enter(self):
        self.ids.timer_value.text = str(get_time())+"s"

    def website(self):
        webbrowser.open('https://github.com/Afterdie/octops')