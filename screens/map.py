from kivy.lang import Builder
from kivy.clock import Clock
from kivy.uix.screenmanager import Screen

from .screen_check import set_time

Builder.load_file('screenLayout/map_screen.kv')

class MapScreen(Screen):
    timer_seconds = 0
    timer_event = None
    def on_enter(self):
        if self.timer_event is None:
            MapScreen.timer_event = Clock.schedule_interval(MapScreen.update_timer, 1)

    def update_timer(self):
        MapScreen.timer_seconds += 1

    def stop_timer(self):
        MapScreen.timer_event.cancel()
        set_time(MapScreen.timer_seconds)