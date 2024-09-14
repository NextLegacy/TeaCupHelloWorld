#include "GUI.hpp"

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