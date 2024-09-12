# OpenGL Practice
This repository contains OpenGL code for learning computer graphics.

## Prerequisites

To build and run this project on an **Apple Silicon-based macOS**, you need to install several dependencies such as `Homebrew`, `cmake`, and OpenGL-related libraries like `GLEW`, `GLM`, and `FreeGLUT`. Follow the steps below to set up your development environment.

### 1. Install Homebrew

Homebrew is a package manager for macOS that simplifies the installation of necessary libraries.

If you haven't installed Homebrew yet, open the Terminal and run the following command:

```sh
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

Once Homebrew is installed, ensure it’s working by running:

```sh
brew --version
```

### 2. Install CMake

CMake is a tool that manages the build process of the project.

Install CMake using Homebrew:

```sh
brew install cmake
```

### 3. Install OpenGL-related Libraries

Next, you need to install the required OpenGL libraries: GLEW, GLM, and FreeGLUT. Run the following commands to install these libraries:

```sh
brew install glew glm freeglut
```

## How to Build and Run the Project?

Once all the prerequisites are installed, follow these steps to build and run the project:

### 1. Configure and Build the Project

Open a terminal and navigate to the project directory.

Run the following commands to configure and build the project:

```sh
# Configure the project with CMake and create the build directory
cmake -S . -B build

# Build the project inside the build directory
make -C build
```

### 2. Run the Executable

After the build completes, run the generated executable to launch the OpenGL application:

```sh
./build/OpenGLProject
```

This will open the OpenGL window, running the main.cpp or other source files defined in the project.

## Computer Graphics Through OpenGL: From Theory to Experiments (4th Edition)

This repository contains code from the book **"Computer Graphics Through OpenGL: From Theory to Experiments, 4th Edition"** by **Sumanta Guha**. The code is intended for educational and non-commercial use.

### About the Book

"Computer Graphics Through OpenGL: From Theory to Experiments" introduces the concepts of computer graphics using OpenGL. This repository hosts code examples from the book to help learners practice and experiment with the concepts taught.

For more information about the book, visit the official website:  
[http://www.sumantaguha.com](http://www.sumantaguha.com)

### Usage

This code is provided for **private, non-commercial** educational use only. You are free to use and distribute the code under the following conditions:

- **Non-commercial purposes only**.
- Proper **attribution** to the author, **Sumanta Guha**, is required.
- For broader distribution, rather than archiving the code yourself, please provide a link to the official website where the latest version of the code is maintained: [http://www.sumantaguha.com](http://www.sumantaguha.com).

### Disclaimer

The code has been tested extensively; however, it comes with no guarantees. Use it at your own risk. The author is not liable for any damage that might result from using this code.

For bug reports or other inquiries, please contact the author at:  
**sg@sumantaguha.com**

### License

This code is copyrighted to the author **Sumanta Guha**. You may use it for any **private non-commercial application**, and distribute it in a limited manner under the same conditions with proper attribution.

---

For the latest version of the book's code, including updates and bug fixes, visit the official website:  
[http://www.sumantaguha.com](http://www.sumantaguha.com)
