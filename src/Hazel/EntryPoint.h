#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	
extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv){

	Hazel::Log::Init();
	HZ_CORE_INFO("Initilized Logger!");
	HZ_CLIENT_INFO("Initilized Logger!");

	int a = 5;
	HZ_CLIENT_INFO("Hello! Variable is :{0}", a);

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif // HZ_PLATFORM_WINDOWS
