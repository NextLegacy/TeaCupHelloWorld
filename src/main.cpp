#include "main.hpp"
#include "GUI.hpp"

#include "HelloWorldSystem.hpp"

int BHW::EntryPoint(std::vector<std::string> args) 
{
    App::GUI gui;

    gui.SubscribeEventSystem<App::HelloWorldSystem>();

    gui.Run();

    return 0;
}