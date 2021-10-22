#pragma once
#include "SDL.h"
#include "Colorbuffer.h"
#include <string>

using color_t = SDL_Color;

class Image
{
public:
	friend class Framebuffer;
	bool Load(const std::string& filename, uint8_t alpha = 255);
	void Flip();
	~Image();

public:
	ColorBuffer colorBuffer;
};
