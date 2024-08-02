#pragma once
#include "Window.h"

class Application
{
public:
	Application(const std::string& commandLine = "");		//with default value
	//master frame / message loop HERE -->
	int Start();
	~Application();		//de-constructor
private:
	void DoFrame(float dt);		//dt --> delta time --> interval between frames
	void HandleInput(float dt);

private:
	std::string commandLine;
	bool showDemoWindow = false;
	Window wnd;

};

