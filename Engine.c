#include "Engine.h"

void Handle_Event(struct Game *game) {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
		// Make game quitable
		case SDL_QUIT:
			game->running = false;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
				// Quit game
				case SDLK_q:
					game->running = false;
					break;
				// Pause game
				case SDLK_SPACE:
					game->paused = !game->paused;
					break;
			}
			break;
	}
}

void Loop(SDL_Window *window, SDL_Renderer *renderer, struct Game game) {
	struct Colors colors = Init_Colors();
	
	while (game.running) {
		Handle_Event(&game);
//		update(game);
		Render(renderer, game, colors);
	}
}
