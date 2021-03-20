#pragma once

#ifdef LILAC_PLATFORM_WINDOWS

extern Lilac::Application* Lilac::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Lilac::CreateApplication();
	app->Run();
	delete app;
}

#endif