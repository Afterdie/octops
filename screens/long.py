from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import set_long
import random

# Import and load .kv file containing widget and layout info along with audio files to be played in the window
Builder.load_file('screenLayout/long.kv')
sound = SoundLoader.load('assets/audio/sitea_planted.wav')
class LongScreen(Screen):
    pressed_buttons = []
    flag = ""
    correct = 1 # random.randint(1,10)

    def show_overlay(self):  # Updating the window state after correct combination
        self.ids.splash_bg.opacity = 0
        self.ids.splash_bg_after.opacity = 1
        self.pressed_buttons = []

    def change_img(self, button, idOG):  # Toggle the button states to on(green)/off(grey) on press
        idOG_dynamic = f"{idOG}"
        widget = getattr(self.ids, idOG_dynamic, None)
        if widget.source == "assets/img/symbols/hidden.png" and idOG == self.correct:
            widget.source = "assets/img/symbols/long_bomb_tile.png"
            self.flag = "Valid"
            self.change()
        elif widget.source == "assets/img/symbols/hidden.png":
            widget.source = "assets/img/symbols/reveal.png"
        else:
            widget.source = "assets/img/symbols/reveal.png"  # add images hidden and reveal, reveal will have an image

    def check_product(self, instance, id):  # Check for correct code combination
        button_id = id
        self.pressed_buttons.append(id)
        if len(self.pressed_buttons) == 3:  # Check every 1 button press
            self.flag = "Invalid"
            self.change()
              # Update global sitea flag variable



    def change(self):
        if self.flag == "Valid":
            sound.play()
            self.show_overlay()
            set_long()

        elif self.flag == "Invalid":  # Toggle all on(green) button states to off(grey) and clear all previous entries
            for button in self.pressed_buttons:
                widget = getattr(self.ids, f"{button}", None)
                widget.source = "assets/img/symbols/hidden.png"
            self.pressed_buttons = []
