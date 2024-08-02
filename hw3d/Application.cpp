#include "Application.h"

Application::Application(const std::string& commandLine)
	:
	commandLine(commandLine),
	wnd(1280,720,L"Hardware 3D Engine")
{


}

Application::~Application()
{}

int Application::Start()
{
	while (true)
	{
		// process all messages pending, but to not block for new messages
		if (const auto ecode = Window::ProcessMessages())
		{
			// if return optional has value, means we're quitting so return exit code
			return *ecode;
		}
		
	}
}