#pragma once

#include "Core.h"

namespace Delirium
{
	class DLR_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	//to be defined by user
	Application* CreateApplication();
} //namespace Delirium