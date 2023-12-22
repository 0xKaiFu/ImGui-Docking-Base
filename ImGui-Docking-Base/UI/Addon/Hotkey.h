#pragma once
#include "../../ImGui/imgui.h"

namespace ImGui {
	void Hotkey(int* k,bool withText = false , const char* text = 0, const ImVec2 size = ImVec2(100, 20),ImGuiButtonFlags buttonFlags = ImGuiButtonFlags_None);
}