#pragma once

#include"Core.h"
#include"spdlog/spdlog.h"
#include"Events/Event.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}