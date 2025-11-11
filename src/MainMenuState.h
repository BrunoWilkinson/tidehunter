#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"

class MainMenuState final : public GameState {
public:
  MainMenuState();
  SDL_AppResult Input(void *appstate, const SDL_Event *event) override;
  void Render(void *appstate, SDL_Renderer *renderer) override;
#ifndef NDEBUG
  void ImGui(SDL_Renderer *renderer) override;
#endif
};

#endif // MAINMENUSTATE_H
