#include "ImGui/imgui.h"
#include "UI/UI.h"

int main() {
    UI::Init(true,"ImGui-Docking-Base","DockingBaseClass");
}

bool demo = false;

void UI::Tick(HWND handle,bool* exit)
{
    if (ImGui::Begin("Test")) {
        ImGui::Checkbox("Demo ?", &demo);
        if (demo)
            ImGui::ShowDemoWindow(&demo);

        if (ImGui::Button("Fuck Off"))
            *exit = true;
        ImGui::End();
    }
}