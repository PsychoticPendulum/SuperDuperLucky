#include "Render.h"

void Render(SDL_Renderer *renderer, struct Game game, struct Colors colors) {
	// Flush buffer
	SDL_RenderClear(renderer);

	// Draw paused
	if (game.paused) {
		Draw_Text(renderer, 50, 50, "Hello World!", game.font);
		Draw_Box(renderer, game.w / 2 - 20, game.h / 2 - 25, 15, 50, colors.WHITE, true); 
		Draw_Box(renderer, game.w / 2 + 5, game.h / 2 - 25, 15, 50, colors.WHITE, true); 
	}

	// Draw background
	SDL_SetRenderDrawColor(renderer, 0xf, 0xf, 0xf, 0xff);
	SDL_RenderPresent(renderer);
}
