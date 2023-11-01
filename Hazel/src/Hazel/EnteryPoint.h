#pragma once
#include <Hazel.h>
#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	Hazel::Log::Init();

	Hazel::Application* app = Hazel::CreateApplication();
	HZ_CORE_WARN("Initialized log");
	int a = 5;
	HZ_INFO("Hello! Var={0}", a);

	app->Run();
	delete app;
}

#endif