#include <Delirium.h>

class Sandbox : public Delirium::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Delirium::Application* Delirium::CreateApplication()
{
	return new Sandbox();
}