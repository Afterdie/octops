from kivy.lang import Builder
from kivy.uix.screenmanager import Screen
from kivy.core.audio import SoundLoader

from .screen_check import set_sitea

# Import and load .kv file containing widget and layout info along with audio files to be played in the window
Builder.load_file('screenLayout/sitea_screen.kv')
sound = SoundLoader.load('assets/audio/sitea_planted.wav')
class SiteAScreen(Screen):
    pressed_buttons = []

    def show_overlay(self):  # Updating the window state after correct combination
        self.ids.splash_bg.opacity = 0
        self.ids.splash_bg_after.opacity = 1
        self.pressed_buttons = []

    def change_img(self, button, idOG):  # Toggle the button states to on(green)/off(grey) on press
        idOG_dynamic = f"{idOG}"
        widget = getattr(self.ids, idOG_dynamic, None)
        widget.source = "assets/img/symbols/off.png" if widget.source == "assets/img/symbols/off.png" else "assets/img/symbols/off.png"

    def check_product(self, instance, id):  # Check for correct code combination
        button_id = id
        self.pressed_buttons.append(id)
        x = ""
        if len(self.pressed_buttons) == 4:  # Check every 4 button press
            product = 1
            for button_id in self.pressed_buttons:
                product *= button_id

            if product == 70:  # Check whether correct combination is entered
                x = "Valid"
                sound.play()
                self.show_overlay()
                set_sitea()  # Update global sitea flag variable
            else:
                x = "Invalid"

        if x == "Invalid":  # Toggle all on(green) button states to off(grey) and clear all previous entries
            for button in self.pressed_buttons:
                widget = getattr(self.ids, f"{button}", None)
                widget.source = "assets/img/symbols/off.png"
            self.pressed_buttons = []
