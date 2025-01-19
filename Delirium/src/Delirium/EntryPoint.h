#pragma once

#ifdef DLR_PLATFORM_WINDOWS

extern Delirium::Application* Delirium::CreateApplication();

int main(int arc, char** argv)
{
	Delirium::Log::Init();
	DLR_CORE_INFO("INFO");
	DLR_CORE_TRACE("TRACE");
	DLR_CORE_WARN("WARNING");
	DLR_CORE_ERROR("ERROR");
	DLR_CORE_FATAL("FATAL");
	
	DLR_INFO("INFO");
	DLR_TRACE("TRACE");
	DLR_WARN("WARNING");
	DLR_ERROR("ERROR");
	DLR_FATAL("FATAL");

	auto app = Delirium::CreateApplication();

	app->Run();

	delete app;
}

#else
	#error OS not supported!

#endif // DLR_PLATFORM_WINDOWS
