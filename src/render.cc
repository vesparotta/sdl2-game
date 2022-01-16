#include "render.h"

SDL_Rect render(int screenWidth, int screenHeight) {
  // Declare rect of square
  SDL_Rect squareRect;

  // Square dimensions: Half of the min(SCREEN_WIDTH, SCREEN_HEIGHT)
  squareRect.w = std::min(screenWidth, screenHeight) / 2;
  squareRect.h = std::min(screenWidth, screenHeight) / 2;

  // Square position: In the middle of the screen
  squareRect.x = screenWidth / 2 - squareRect.w / 2;
  squareRect.y = screenWidth / 2 - squareRect.h / 2;

  return squareRect;
}