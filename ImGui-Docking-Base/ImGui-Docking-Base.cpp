#include "ImGui/imgui.h"
#include "UI/UI.h"
#include <iostream>

int main() {
    UI::Init(false,"ImGui-Docking-Base","DockingBaseClass");
    return 0;
}

bool demo = false;
int demoBind = 0;
int demoBind2 = 0;
int demoBindWithText = 0;

void UI::Tick(HWND handle,bool* exit)
{
    if (ImGui::Begin("Test")) {
        ImGui::Checkbox("Demo ?", &demo);
        if (demo)
            ImGui::ShowDemoWindow(&demo);
        
        ImGui::Hotkey(&demoBind);
        ImGui::Hotkey(&demoBind2);
        ImGui::Hotkey(&demoBindWithText, true, "demoBindTextName",ImVec2(100,20));

        if (ImGui::Button("Fuck Off"))
            *exit = true;
        ImGui::End();
    }
}


#ifdef _WINDLL
BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)&main, 0, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}
#endif
