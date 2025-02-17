#include "Window.h"


namespace BlackJack
{
	Window::Window(const std::string& name, int width, int height)
	{
		m_Window = SDL_CreateWindow(name.c_str(), width, height, SDL_WINDOW_RESIZABLE);
	}
	Window::~Window()
	{
		SDL_DestroyWindow(m_Window);
	}
}