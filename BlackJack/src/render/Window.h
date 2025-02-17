#pragma once
#include "bjpch.h"
#include "SDL3/SDL.h"

namespace BlackJack
{
	class Window
	{
	public:
		Window(const std::string& name = "BlackJack", int width = 512, int height = 512);
		~Window();
	private:
		SDL_Window* m_Window = nullptr;
	};
}

