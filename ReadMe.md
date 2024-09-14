# TeaCup Hello World Application

## Overview

This is a simple C++ application that utilizes the TeaCup framework along with BoilingHotWater for creating a graphical user interface (GUI) with Dear ImGui and GLFW. This project demonstrates a simple "Hello, World!" application with basic input handling (like pressing F11 to toggle fullscreen mode).

## Building the Project

To build the project, you need to have CMake and a C++ compiler installed. Follow these steps:

1. **Clone the repository:**
    ```sh
    git clone <repository-url>
    cd TeaPot
    ```

2. **Create a build directory and navigate into it:**
    ```sh
    mkdir build
    cd build
    ```

3. **Run CMake to configure the project:**
    ```sh
    cmake ..
    ```

4. **Build the project:**
    ```sh
    cmake --build .
    ```

## Running the Application

After building the project, you can run the application from the `bin` directory:

```sh
./bin/App.exe
```

## Code Overview

### Main Entry Point

The main entry point of the application is defined in `main.cpp`:

```cpp
#include "main.hpp"
#include "GUI.hpp"
#include "HelloWorldSystem.hpp"

int BHW::EntryPoint(std::vector<std::string> args) 
{
    // Application entry point logic
}
```

### GUI Class

The GUI class is defined in `GUI.hpp` and implemented in `GUI.cpp`

```cpp
namespace App 
{
    class GUI : public TC::TeaCup<TC::GLFW_OpenGL_DearImGui, TC::EventSubscriber<GUI>, GUI> 
    {
    public:
        using EventSubscriber = TC::EventSubscriber<GUI>;
    };
}
```

### HelloWorldSystem Class

The HelloWorldSystem class is defined in `HelloWorldSystem.hpp` and implemented in `HelloWorldSystem.cpp`

```cpp
namespace App
{
    class HelloWorldSystem : public GUI::EventSubscriber 
    {
    public:
        void Start (GUI& gui) override;
        void Update(GUI& gui) override;
        void Render(GUI& gui) override;
    };
}
```

## Dependencies

- **BoilingHotWater**
- **TeaCup**
- **Threads**
- **OpenGL**

These dependencies are specified in the CMakeLists.txt file.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.
