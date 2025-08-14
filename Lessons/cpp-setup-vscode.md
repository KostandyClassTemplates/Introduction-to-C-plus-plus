# Setting Up C++ in Visual Studio Code (macOS & Windows)

This guide will help you set up C++ development in Visual Studio Code on both macOS and Windows.

---

## 1. Install Visual Studio Code
- Download and install [VS Code](https://code.visualstudio.com/) for your operating system.

---

## 2. Install C++ Compiler

### On macOS
- Open Terminal and run:
  ```bash
  xcode-select --install
  ```
- This installs the Xcode Command Line Tools, which include the `g++` compiler.
- To check installation, run:
  ```bash
  g++ --version
  ```

### On Windows
- Download and install [MinGW-w64](https://www.mingw-w64.org/) or [MSYS2](https://www.msys2.org/).
- Add the compiler to your system PATH (follow the installer instructions).
- To check installation, open Command Prompt and run:
  ```cmd
  g++ --version
  ```

---

## 3. Install C++ Extension for VS Code
- Open VS Code.
- Go to Extensions (`Ctrl+Shift+X` or `Cmd+Shift+X`).
- Search for and install **C/C++** by Microsoft.

---

## 4. Create and Run a C++ Program
1. Create a new folder for your C++ projects.
2. Open the folder in VS Code.
3. Create a new file, e.g., `main.cpp`.
4. Write your C++ code.

Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, C++!" << endl;
    return 0;
}
```

---

## 5. Build and Run Your Program

### Using Terminal
- Open the integrated terminal in VS Code (`Ctrl+`` or `Cmd+``).
- Compile your code:
  ```bash
  g++ main.cpp -o main
  ```
- Run your program:
  ```bash
  ./main
  ```

---

## 6. (Optional) Configure Build Tasks
- You can set up VS Code tasks to automate building and running your code.
- Go to `Terminal > Configure Default Build Task` and select `C/C++: g++ build active file`.

---

## Additional Resources
- [VS Code C++ Docs](https://code.visualstudio.com/docs/languages/cpp)
- [Microsoft C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- [MinGW-w64](https://www.mingw-w64.org/)
- [MSYS2](https://www.msys2.org/)

---

If you have any issues, ask your instructor or refer to the guides above.
