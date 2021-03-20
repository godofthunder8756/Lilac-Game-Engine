#pragma once

#include "Core.h"

namespace Lilac {

	class LILAC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To be defined in client
	Application* CreateApplication();

}

