/*
** EPITECH PROJECT, 2024
** Arcade
** File description:
** SDL2
*/

#ifndef SDL2_HPP_
#define SDL2_HPP_

#include "../ADisplayModule.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

namespace arcade {
class Sdl2 : virtual public arcade::ADisplayModule {
public:
  Sdl2();
  ~Sdl2();
  std::string getName();
  void clearWindow();
  void displayWindow();
  arcade::KeyboardInput getInput();
  void drawSprite(
      std::pair<char, std::string> sprite, int x, int y, int width, int height);
  void drawAllSprite(std::pair<char, std::string> sprite,
                     std::vector<std::pair<int, int>> coordinates,
                     int width,
                     int height);
  void drawText(const std::string text, int x, int y, int size);

protected:
  SDL_Window *_window;
  TTF_Font *_font;
  SDL_Renderer *_renderer;
};
}; // namespace arcade

#endif /* !SDL2_HPP_ */
