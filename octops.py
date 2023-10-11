# This file is final and shouldnt be changed
# Builder is used to generate all UI elements
# make use of the .kv files stored inside the screen folder
# This file simply builds the 
# Define window behaviours here such as size, transition


#------------------------Imports-------------------------#

from kivy.config import Config 

Config.set('kivy','window_icon','assets/img/main_mascot.png')
Config.set('graphics', 'resizable', False)
Config.set('input', 'mouse', 'mouse,disable_multitouch')
Config.set('kivy', 'exit_on_escape', '0')

from kivy.app import App
from kivy.core.window import Window

from kivy.uix.screenmanager import ScreenManager, Screen, NoTransition

#---------------------Screen Imports---------------------#

from screens.main import MainScreen
from screens.map import MapScreen
from screens.siteA import SiteAScreen
from screens.siteB import SiteBScreen
from screens.doors import DoorsScreen
from screens.spawn import SpawnScreen
from screens.map import MapScreen
from screens.long import LongScreen

#--------------------------App--------------------------#

Window.size = (600,600)
Window.borderless = True
class Octops(App):

    def build(self):
        sm = ScreenManager()
        sm.transition = NoTransition()

        sm.add_widget(MainScreen(name='main'))
        sm.add_widget(MapScreen(name='map'))
        sm.add_widget(SiteBScreen(name='siteb'))
        sm.add_widget(SiteAScreen(name='sitea'))
        sm.add_widget(DoorsScreen(name='doors'))
        sm.add_widget(SpawnScreen(name='spawn'))
        sm.add_widget(LongScreen(name='long'))

        return sm
    
    def open_settings(self, *largs):
        pass
 
Octops().run()