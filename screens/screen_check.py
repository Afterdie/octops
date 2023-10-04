devMode = False

sitea = devMode
doors = devMode
spawn = devMode
long = devMode
passcode = 1275 #linked to bomb hints png
slider = [25, 55, 100] #linked to the marks on tracks
time = 0

def set_sitea():
    global sitea
    sitea = not sitea

def get_sitea():
    return sitea

def set_doors():
    global doors
    doors = not doors

def get_doors():
    return doors

def set_spawn():
    global spawn
    spawn = not spawn

def get_spawn():
    return spawn

def set_time(val):
    global time
    time  = val

def get_time():
    return time

def set_long():
    global long
    long = not long

def get_long():
    return long