#include <hzpch.h>

#include "Application.h"	
#include "events/Event.h"
#include "events/KeyEvent.h"
#include "events/MouseEvent.h"
#include "events/ApplicationEvent.h"

#include "Hazel/Log.h"
namespace Hazel
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		Hazel::KeyPressedEvent e1(11, 24);
		Hazel::KeyReleasedEvent e2(69);

		Hazel::MouseMovedEvent e3(1299, 323);
		Hazel::MouseScrollEvent e4(213, 233);

		Hazel::MouseButtonPressedEvent e5(77);
		Hazel::MouseButtonReleasedEvent e6(420);

		Hazel::WindowResizeEvent e7(12312, 132);
		Hazel::WindowCloseEvent e8;
		HZ_TRACE(e1);
		HZ_TRACE(e2);

		HZ_TRACE(e3);
		HZ_TRACE(e4);


		HZ_TRACE(e5);
		HZ_TRACE(e6);

		HZ_TRACE(e7);
		HZ_TRACE(e8);

		std::cout << e2.IsInCateogry(EventCategory::EventCategoryInput | EventCategory::EventCategoryKeyboard);
		while (true);
	}

}