<h3 align="center">
<img src='https://github.com/Afterdie/octops-final/assets/68675629/e698fb58-4fe9-4df3-8274-3bca68caa76c'>
</h3>
<h1 align='center'>Octops</h1>

### The timeline for the hackathon has been extended !

Make sure to ⭐ the repo !

# Table of Contents

1. [Introduction](#introduction)
2. [Steps to Contribution](#contributing-guidelines)
- [Replit](#replit) (Beginner)
- [CLI](#cli) (Intermediate)
3. [Introduction to Python](#introduction-to-python)
4. [Introduction to Kivy](#introduction-to-kivy)
<details>
    <summary>
        Contents
    </summary> 
    <li><a href="#installation-of-kivy">Installation of Kivy</a></li>
    <li><a href="#kivy-application">Kivy Application</a></li>
    <a href="#kivy-language"><li>Kivy Language</li></a>
    <a href="kivy-widgets"><li>Kivy Widgets</li></a>
    <a href="#kivy-properties"><li>Kivy Properties</li></a>
    <a href="#kivy-events"><li>Kivy Events</li></a>
    <a href="#kivy-graphics"><li>Kivy Graphics</li></a>
    <a href="#label"><li>Label</li></a>
    <a href="#button"><li>Button</li></a>
    <a href="#image"><li>Image</li></a>
    <a href="#slider"><li>Slider</li></a>
    <a href="#kv-layouts"><li>Kv layouts</li></a>
    <a href="#screens"><li>Screens</li></a>
    <a href="#kivy-animations"><li>Kivy Animations</li></a>
</details>

5. [About the Game](#about-the-game)
6. [File Structure](#file-structure)
7. [Issue Listing](#issue-listing)
8. [Conclusion](#conclusion)

# Introduction

Welcome to the open-source project, **Octops**! In Octops, we've combined the nostalgia of the original game **Counter Strike 1.6** with an exciting new gameplay concept.
If you're eager to dive into the action and defuse the bomb, follow this documentation to set up and play the game. We'll guide you through the installation process and provide all the necessary information to get you started.

# Contributing Guidelines

We welcome contributions from the community to enhance our Octops project. To maintain consistency and organization, please follow these guidelines when creating branches for your contributions:

### Branch Naming Convention

- Branch names should follow the format: `rollnumber_name`.

**Example:**

- If your name is abc and roll number is 123, your branch name would be: `123_abc`.

**⚠️ Not following the naming convention will lead to immediate disqualification**

# Replit 

0. Create an account at [Replit](https://replit.com/signup), click on `Continue with GitHub`

1. Create a new Repl by clicking on `+ Create Repl` at homepage
https://replit.com/new

2. Clone the repository
<details>
    <summary>
        Example
    </summary>
    <img src='https://github.com/Afterdie/octops-final/assets/68675629/a77136c6-1598-428f-97c9-73bd1c2e360a'>
</details>

3. Create repl 
- GitHub URL : https://github.com/github-username/octops
- Privacy : Public

4. Add your changes 

5. Under the `Tools` section of your repl look for `Git`
<details>
    <summary>
        Example
    </summary>
    <img src='https://github.com/Afterdie/octops-final/assets/68675629/0d2b5b39-3427-4636-b880-ecbf8315f865'>
</details>

6. Add a Commit message and click on `Stage and commit all changes`
<details>
    <summary>
        Example
    </summary>
    <img src='https://github.com/Afterdie/octops-final/assets/68675629/6e745895-3375-4e97-b856-b6a87fd8c93d'>
</details>

7. Click on Push and Sync with Remote
<details>
    <summary>
        Example
    </summary>
    <img src='https://github.com/Afterdie/octops-final/assets/68675629/1b5679a8-48d0-45db-b7de-06d58e140cb4'>
</details>

8. Open Github and move to https://github.com/Afterdie/octops/ and create a Pull Request
 
# CLI

## Fork the Repository

Fork this repository by clicking on the `Fork` button on the top of this page. This will create a copy of this repository in your account.

<img align="center" width="300" src="https://github.com/MLSAKIIT/first-contributions/blob/main/.github/assets/README/fork.png" alt="Fork the Repository"/>

---

## Clone the Repository

Clone the forked repository to your machine. Go to your GitHub account, open the forked repository, click on the `Code` button and then click the `Copy to Clipboard` icon.

<img align="center" width="300" src="https://github.com/MSCKIIT/first-contributions/blob/main/.github/assets/README/clone.png" alt="Clone the Repository"/>

Open a terminal and run the following git command:

```
git clone https://github.com/<your_username>/octops.git
```

<img align="center" width="300" src="https://github.com/MLSAKIIT/first-contributions/blob/main/.github/assets/README/copy-url.png" alt="Copy URL to Clipboard"/>

---
## Create a Branch

Change to the repository directory on your computer (if you are not already there):

```
cd octops
```

Now create a branch using the `git checkout` command:

```
git checkout -b <your-new-branch-name>
```

For example:

```
git checkout -b 2201001-paarth
```

The name of the branch does not need to have the word _add_ in it, but it's a reasonable thing to include because the purpose of this branch is to add your name to a list.

---

## Make Necessary Changes and Commit the Changes

If you go to the project directory and execute the command `git status`, you'll see there are changes.

Add those changes to the branch you just created using the `git add -A` command:

Now commit those changes using the `git commit` command:

```
git commit -m "Issue <Number>, <Name>, <Description of your changes>"
```

By replacing `<Name>` with your full name.
and `<Number>` as displayed on the `<issues>` tab of the GitHub repo    


## Push Changes to GitHub

Push your changes using the command `git push`:

```
git push origin <add-your-branch-name>
```

By replacing `<add-your-branch-name>` with the name of the branch you created earlier.

---

## Submit Your Changes for Review

If you go to your repository on GitHub, you'll see a `Compare & pull request` button. Click on that button.

Now submit the pull request.

Soon all your changes will be merged into the master branch of this project. You will also get a notification e-mail once the changes have been merged.

---

## Where to Go from Here?

Congrats! You just completed the standard _fork -> clone -> edit -> pull request_ workflow that you'll encounter often as a contributor.

---

# Introduction to Python

Python is a popular, beginner-friendly programming language known for its simplicity and versatility. In this guide, we'll cover the basics such as data types, syntax, classes and methods from object-oriented programming (OOP), and import statements.

### Getting Started

Before we dive into Python programming, make sure you have Python installed on your computer. You can download Python from the [official Python](https://www.python.org/downloads/) website and follow the default installation instructions. Once installed, you can run Python code in an interactive environment called the Python Shell or by creating Python scripts in an IDE such as [Visual Studio Code](https://code.visualstudio.com/) or [Pycharm](https://www.jetbrains.com/pycharm/).

## Data Types

Python has several built-in data types, including:

- **Integers**: Whole numbers, e.g., `5`, `-10`.
- **Floats**: Decimal numbers, e.g., `3.14`, `-0.5`.
- **Strings**: Text enclosed in single or double quotes, e.g., `'Hello, Python!'`, `"Data Science"`.
- **Lists**: Ordered collections of items, e.g., `[1, 2, 3]`, `['apple', 'banana', 'cherry']`.
- **Dictionaries**: Key-value pairs, e.g., `{'name': 'Alice', 'age': 30}`.
- **Booleans**: True or False values, e.g., `True`, `False`.

## Basic Syntax

Python uses a simple and readable syntax. Here are some basic syntax rules:

- Use indentation (whitespace) to define code blocks.
- Comments start with `#` and are ignored by the interpreter.
- Variables are created by assigning values to names, e.g., `x = 10`.
- Print statements: `print("Hello, Python!")`.
- f-strings are a convenient way to embed variables and expressions within strings: `f"{variable} text"`.
- Import external libraries and modules using import statement: `import math`.

Example:

```python
import math
# This is a comment
x = 16
if x > 5:
    y = math.sqrt(x)
    print(f"{y} is the square root of {x}.")
```

## User Defined Functions

In Python, you can define your own functions to encapsulate a block of code. Functions are reusable and can take parameters (inputs) and return values (outputs).

Example:

```python
# Define a function
def greet(name):
    return f"Hello, {name}!"

# Call the function
message = greet("Alice")
print(message)
```

## Object-Oriented Programming (OOP)

Python supports OOP principles, allowing you to create classes and objects. A class defines a blueprint for objects, and objects are instances of a class. Classes can have attributes (variables) and methods (functions).

Example:

```python
class Dog:
    def __init__(self, name):
        self.name = name

    def bark(self):
        print(f"{self.name} says Woof!")

my_dog = Dog("Buddy")
my_dog.bark()
```

This introduction provides a basic foundation for Python programming, but if you'd like a quick reference or in-depth details, you can explore the [Python Cheatsheet](https://www.pythoncheatsheet.org/cheatsheet/basics) for handy tips and commands. For comprehensive documentation and tutorials, visit the official [Python Documentation](https://docs.python.org/3.11/).

---
# Introduction to Kivy

Kivy is a free and open-source Python framework for creating cross-platform applications with a natural user interface, and it can be easily integrated into any python project.

### Installation of Kivy

> Installing on Windows
```sh
python -m pip install kivy
```

> Installing on Linux/Mac
```sh
python3 -m pip install kivy
```

### Kivy Application
- `App` class : It is the base class for creating Kivy applications. It handles the initialization of the application, and it manages the life cycle of the application as well.
- `build()` method : used to return the root widget of the application. It is a mandatory method in the `App` class.
- `run()` method : used to run the application. It is a mandatory method in the `App` class.

### Kivy Language
- `kv` files : `kv` files are used to define the structure and appearance of the application's screens and their layouts. These files are built to their respective screens using the `Builder.load_file()` method.
- `Builder.load_file()` method : `Builder.load_file()` method is used to load the `kv` file and build it to the screen.

### Kivy Widgets
- `Label` widget : 
```kv
Label:
    text: "Welcome to Kivy!"
    font_size: '24sp'
    size: self.texture_size
```
- `Button` widget : 
```kv
Button:
    text: "Click Me"
    size: dp(147), dp(61)
    on_release: root.button_released()
    on_press: root.change_image()
    disabled: True if bg_img.opacity == 0 else False
```
- `Shape` widget :
```kv
Shape:
    Rectangle:
        pos: 100, 100
        size: 100, 100
```  
- `Image` widget :
```kv
Image:
   id: my_image
   source: 'assets/main_logo.png'
   pos: 100, 100
   size: 100, 100
   opacity: 0.5
```
- `Slider` widget :
```kv
Slider:
    value: 50
    min: 0
    max: 100
    on_value: root.slider_val_change()
```
### Kivy Properties
> `size` property
```kv
size: 100, 100
```

> `pos` property
```kv
pos: 100, 100
```

> `size_hint` property
```kv
size_hint: 0.5, 0.5
```

> `color` property
```kv
color: 1, 0, 0, 1
```

> `source` property
```kv
source: 'assets/main_logo.png'
```

### Kivy Events
> `on_press` event : Its fired when the user presses the button.
```kv
on_press: root.on_press()
```

> `on_value` event : It's fired when the value of the widget changes.
```kv
on_value: root.on_value()
```

> `on_event` event : Its fired when the event occurs.
```kv
on_event: root.on_event()
```

### Kivy Graphics
- `Rectangle` instruction : `Rectangle` instruction is used to draw a rectangle on the screen.
```kv
Rectangle:
    pos: 100, 100
    size: 100, 100
```

These are just a few examples of the many widgets and parameters available in Kivy. Refer to the official Kivy documentation for a comprehensive list of widgets and their attributes: [Kivy Widgets](https://kivy.org/doc/stable/api-kivy.uix.html)

### Kv layouts

> `canvas` : `canvas` is used to draw a shape on the screen.
```kv
canvas:
    Rectangle:
        pos: 100, 100
        size: 100, 100
```
`FloatLayout` : used to arrange the widgets in a floating position.

`BoxLayout` : used to arrange the widgets in a horizontal or vertical manner.

`GridLayout` : used to arrange the widgets in a grid manner.

```kv
<AllLayouts>
      FloatLayout:
         Button:
               size_hint: 0.2, 0.2
               pos_hint: {'x': 0.4, 'y': 0.4}
               text: 'FloatLayout'
      BoxLayout:
         Button:
               size_hint: 0.2, 0.2
               text: 'BoxLayout'
         Button:
               size_hint: 0.2, 0.2
               text: 'BoxLayout'
      GridLayout:
         cols: 2
         Button:
               size_hint: 0.2, 0.2
               text: 'GridLayout'
         Button:
               size_hint: 0.2, 0.2
               text: 'GridLayout'
         Button:
               size_hint: 0.2, 0.2
               text: 'GridLayout'
         Button:
               size_hint: 0.2, 0.2
               text: 'GridLayout'
```

`AsyncImage` : `AsyncImage` is used to display an image asynchronously (without blocking the main thread.)
```kv
AsyncImage:
    source: 'assets/main_logo.png'
```

### Screens

The `screens/` directory is intended for Python files that define the behavior and logic of individual screens within your application. These screens are managed and coordinated using Kivy's `ScreenManager` in the main Python file.

Example:
- `screens/main_screen.py`
- `screens/map_screen.py`

`Screen` : used to create a screen in the application.
`ScreenManager` : used to manage the transitions between different screens based on application logic.
`ScreenManager.current` property : used to get the name of the current screen.

### Kivy Animations
- `Animation`  
- `start()` method
- `stop()` method

# About the Game

The game consists of different screens based on Counter Strike 1.6 theme. There's a map which gives access to different locations. Each screen presents players with a distinct challenge or mission. There are hints which can be located on the bomb. To succeed, players must solve puzzles, and apply their skills effectively. Once all the tasks are accomplished, players gain access to the bomb and must defuse it to win the round.

# File Structure

The project is structured into several folders and files:

### 1. **assets/**

The `assets/` directory is intended for storing assets such as images, fonts, audio, and other resources that your application may need. These assets can be accessed within your Kivy files.

Example:
- `assets/main_logo.png`

### 2. **screen_layout/**

The `screen_layout/` directory contains the Kivy language (KV) files that define the structure and appearance of the app's screens and their layouts. These KV files are built to their respective screens in the `screens/` folder using `Builder.load_file()`.

Example:
- `screen_layout/main_screen.kv`
- `screen_layout/map_screen.kv`

### 3. **screens/**

The `screens/` directory is intended for Python files that define the behavior and logic of individual screens within your application. These screens are managed and coordinated using Kivy's `ScreenManager` in the main Python file.

Example:
- `screens/main_screen.py`
- `screens/map_screen.py`

### 4. **octops.py**

`octops.py` is the main Python script that acts as the entry point of your Kivy application. It connects and manages all the components of your application, including screens, transitions, and user interactions. This script initializes the Kivy app and sets up the screen manager.

Example:
- `octops.py`

## How It Works

1. The `octops.py` script is the entry point of the application. It initializes the Kivy app and sets up the screen manager.

2. The KV files in the `screen_layout/` directory define the layout and appearance of the screens and widgets.

3. The Python files in the `screens/` directory define the behavior and logic of individual screens. These screens are built to the corresponding KV files.

4. The `ScreenManager` in `octops.py` manages transitions between different screens based application logic.

## Getting Started

To run the Octops Kivy app on your local machine, follow these steps:

1. Clone the repository to your local machine:

   ```sh
   git clone https://github.com/Afterdie/octops
   ```

2. Install the required dependencies if you haven't already. You may use a virtual environment for this:

   ```sh
   pip install kivy
   ```

3. Navigate to the project directory:

   ```sh
   cd octops
   ```

4. Run the application:

   ```sh
   python octops.py
   ```

The app should launch, and you can interact with it to explore its functionality.

# Issue Listing

- [Issues <Description>](https://github.com/Afterdie/octops-final/issues)

# Conclusion

Thank you for being part of our community, and we look forward to sharing countless thrilling moments as we defuse bombs and tackle new challenges together!


<p align="center">
<a href="https://twitter.com/msckiit" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/89732800-b189-402d-8b20-141b00fbac22" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://www.facebook.com/msakiit" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/15dca717-70a3-406d-af82-8e25e91e6a91" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://discord.com/invite/P6VCP2Ry3q" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/a5d1747f-b59f-487e-a473-dd9865864de6" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://www.linkedin.com/company/msckiit/" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/73d3360f-c849-4171-ac81-02ebf291133f" alt="MLSAKIIT" height="35" width="35"/></a>
<a href="https://www.instagram.com/msckiit/" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/1a71caa3-e81a-4b84-ab3e-6c01b3e6df93" alt="MLSAKIIT" height="35" width="35" /></a>
</p> 
