#include "HelloWorldSystem.hpp"

namespace App
{
    void HelloWorldSystem::Start(GUI& gui)
    {
        std::cout << "Hello, World!" << std::endl;
    }

    void HelloWorldSystem::Update(GUI& gui)
    {
        if (gui.GetInput().KeyBoard()(TC::KeyCode::F11).PressedThisFrame())
        {
            gui.SetFullscreen(!gui.GetFullscreen());
        }
    }

    void HelloWorldSystem::Render(GUI& gui)
    {
        
        //std::cout << gui.GetInput().MousePosition().x << ", " << gui.GetInput().MousePosition().y << std::endl;S
        static bool once = false;
        if (!once)
        {
            once = true;

            ImVec2 center = ImGui::GetMainViewport()->GetCenter();
            
            ImGui::SetNextWindowSize(ImVec2(200, 100), ImGuiCond_Appearing);
            ImGui::SetNextWindowPos(center, ImGuiCond_Appearing, ImVec2(0.5f, 0.5f));
        }

        ImGui::Begin("ImGui Window");

        ImGui::SetCursorPosX((ImGui::GetWindowWidth () - ImGui::CalcTextSize("Hello, World!").x) * 0.5);
        ImGui::SetCursorPosY((ImGui::GetWindowHeight() - ImGui::CalcTextSize("Hello, World!").y) * 0.5);
        
        ImGui::Text("Hello, World!");

        ImGui::End();
    }
}