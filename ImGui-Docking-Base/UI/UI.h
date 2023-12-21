#pragma once
#include <Windows.h>
#include <iostream>

class UI
{
public:
	static void Init(bool killConsole, std::string windowName, std::string windowClassName = "imguiWindow");
	static void Tick(HWND handle,bool* exit);
};

