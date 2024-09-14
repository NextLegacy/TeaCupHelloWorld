#pragma once

#include <BHW/utils/console/Console.hpp>
#include <BHW/utils/event/EventSystem.hpp>

#include <TC/gapi/impl/GLFW_OpenGL_DearImGui.hpp>
#include <TC/TeaCup.hpp>

namespace App
{
    class GUI : public TC::TeaCup<TC::GLFW_OpenGL_DearImGui, TC::EventSubscriber<GUI>, GUI>
    {
    public:
        using EventSubscriber = TC::EventSubscriber<GUI>;
    };
}