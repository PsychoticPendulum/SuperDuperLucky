#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#include <getopt.h>
#include <math.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#define CENTERED SDL_WINDOWPOS_CENTERED

struct Game {
	char *title;
	bool running;
	bool paused;
	int w;
	int h;
	TTF_Font *font;
};

#include "Color.h"
#include "Draw.h"
#include "Render.h"
#include "Engine.h"

bool Init();
void Clean(SDL_Window *window, SDL_Renderer *renderer, struct Game game);
