#pragma once
#include "SDL.h"
#include "Colorbuffer.h"
#include <string>

using color_t = SDL_Color;

class Image
{
public:
	friend class Framebuffer;
	~Image();
	Image() = default;
	Image(const std::string& filename, uint8_t alpha = 255);

	bool Load(const std::string& filename, uint8_t alpha = 255);
	void Flip();

public:
	ColorBuffer colorBuffer;
};
