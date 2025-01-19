#include <Delirium.h>

class Sandbox : public Delirium::Application
{
public:
	Sandbox()
	{
		DLR_TRACE("App created");
	}

	~Sandbox()
	{

	}
};


Delirium::Application* Delirium::CreateApplication()
{
	DLR_CORE_TRACE("Creating app");
	return new Sandbox();
}