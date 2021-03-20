#include "Lilac.h"

class Sandbox : public Lilac::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Lilac::Application* Lilac::CreateApplication()
{
	return new Sandbox();
}