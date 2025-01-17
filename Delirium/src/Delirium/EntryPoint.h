#pragma once

#ifdef DLR_PLATFORM_WINDOWS

extern Delirium::Application* Delirium::CreateApplication();

int main(int arc, char** argv)
{
	auto app = Delirium::CreateApplication();

	app->Run();

	delete app;
}

#else
	#error OS not supported!

#endif // DLR_PLATFORM_WINDOWS
