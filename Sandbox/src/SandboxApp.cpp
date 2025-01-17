#include <Delirium.h>

#include <cstdio>

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