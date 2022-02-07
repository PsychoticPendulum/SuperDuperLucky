#pragma once
#include "Game.h"

void Loop(SDL_Window *window, SDL_Renderer *renderer, struct Game game);
void Handle_Event(struct Game *game);

// Mathematical Functions
double Get_Distance(int x1, int y1, int x2, int y2);
