<h3 align="center">
<img src='assets\img\hacktoberfest.png'>
</h3>
<h1 align='center'>Octops</h1>

<p align="center">
  An open-source point and click game made in Python 3.11<br>
  Made with Kivy and compiled with Nuitka<br><br>
  Hacktoberfest 2023  
</p>

<p align="center">
  <a href="#introduction"><strong>Introduction</strong></a> ·
  <a href="#overview"><strong>Overview</strong></a> ·
  <a href="#local-development"><strong>Local Development</strong></a> ·
  <a href="#file-structure"><strong>File Structure</strong></a> ·
  <a href="#authors"><strong>Authors</strong></a>
</p>

## Introduction
Welcome to the open-source project, **Octops**! In this, we've combined the nostalgia of the original game `Counter Strike 1.6` with an exciting new gameplay concept. If you're eager to dive into the action and defuse the bomb, follow this documentation to set up and play the game.

## Overview
The game consists of different screens based on Counter Strike 1.6 theme. There's a map which gives access to different locations. Each screen presents players with a distinct challenge or mission. There are hints which can be located on the bomb. To succeed, players must solve puzzles, and apply their skills effectively. Once all the tasks are accomplished, players gain access to the bomb and must defuse it to win the round.

## Local Development
To set up the project locally, check out the [`INSTRUCTIONS.md`](INSTRUCTIONS.md) file and follow the steps mentioned there.

To build the game executable yourself and run it, check out the [`BUILD.md`](build\README.md) file.

For contributions, check out the [`CONTRIBUTING.md`](CONTRIBUTING.md) file and be sure to adhere to the guidelines mentioned there.

## File Structure
The project is divided into different folders, each with a specific purpose. Here's a brief overview of the contents of each folder:
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

## Authors
This project is created by [MLSA KIIT](https://mlsakiit.com) team members:

- Akshat Singh - [@Afterdie](https://github.com/afterdie)
- Yashvardhan Singh - [@PythonicBoat](https://github.com/PythonicBoat)
- Dhruv Agarwal - [@dhruvagarwal](https://github.com/dhruvagarwal)
- Sourasish Basu - [@SourasishBasu](https://github.com/SourasishBasu)
- Swapnil Dutta - [@rycerzes](https://github.com/rycerzes)
---

<p align="center">
<a href="https://twitter.com/msckiit" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/89732800-b189-402d-8b20-141b00fbac22" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://www.facebook.com/msakiit" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/15dca717-70a3-406d-af82-8e25e91e6a91" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://discord.com/invite/P6VCP2Ry3q" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/a5d1747f-b59f-487e-a473-dd9865864de6" alt="MLSAKIIT" height="35" width="35" /></a>
<a href="https://www.linkedin.com/company/msckiit/" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/73d3360f-c849-4171-ac81-02ebf291133f" alt="MLSAKIIT" height="35" width="35"/></a>
<a href="https://www.instagram.com/mlsakiit/" target="_blank"><img align="center" src="https://github.com/MLSAKIIT/.github/assets/68675629/1a71caa3-e81a-4b84-ab3e-6c01b3e6df93" alt="MLSAKIIT" height="35" width="35" /></a>
</p> 
