## Guide for building executable
<p align="center">
  <a href="#windows"><strong>Windows</strong></a> ·
  <a href="#linux"><strong>Linux</strong></a>
</p>

### Introduction

This guide will help you build the game executable yourself and run it. The game is built using [Nuitka](https://nuitka.net/), a Python compiler. The game is built for Windows and Linux. The build process is different for both the platforms. Follow the instructions below to build the game for your platform.

Build scripts are included in the repository. You can find them in the `build` directory. The build scripts are named [`windows-build.bat`]() and [`linux-build.sh`](build\linux-build.sh) for Windows and Linux respectively. You can run these scripts to build the game. However, if you want to build the game manually, follow the instructions below.

> The build scripts are written for Python 3.11. The build script uses Nuitka because we want to compile the game to an executable. Nuitka is a Python compiler. You can read more about it [here](https://nuitka.net/). Nuitka is a C based wrapper/compiler which compiles Python code to C code and then compiles it to an executable. Nuitka is used because the generated executable is faster than the Python code and reverse engineering the executable becomes very difficult.

### Windows
For Windows 11, you need to have Python 3.11 installed. You can download it from [here](https://www.python.org/downloads). Make sure to check the `Add Python 3.11 to PATH` option while installing. You also need to have [Nuitka](https://nuitka.net/) installed. You can download it from [here](https://nuitka.net/pages/download.html). Make sure to check the `Add to PATH` option while installing.

Once you have Python and Nuitka installed, open the command prompt and run the following command to build the game:
```powershell
./windows-build.bat
```

### Linux
For Linux, you need to have Python 3.11 installed. You can download it from [here](https://www.python.org/downloads). You also need to have [Nuitka](https://nuitka.net/) installed. You can download it from [here](https://nuitka.net/pages/download.html). Make sure to check the `Add to PATH` option while installing.

Once you have Python and Nuitka installed, open the terminal and run the following command to build the game:
```bash
./linux-build.sh
```
### File Structure
File structure remains the same as the original repository. The only difference is that the `build/` directory is added to the `root` directory. The `build/` directory contains the build scripts and the generated executable.

### Running the game
Once the game is built, you can find the executable in the `root` directory. The executable is named `octops.exe` for Windows and `octops.bin` for Linux. You can run the executable to play the game. The binary executable only depends on the `assets/` folder. So, make sure to keep the `assets/` folder in the same directory as the executable.

