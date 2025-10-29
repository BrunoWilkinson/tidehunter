#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "imgui.h"
#include <SDL3/SDL.h>

enum class EGameState { MENU, LOBBY, BATTLE, SETTINGS, NONE };

class GameState {
public:
  EGameState GetState() const { return m_state; }
  virtual SDL_AppResult Input(void *appstate, const SDL_Event *event) = 0;
  virtual void Render(void *appstate, SDL_Renderer *renderer) = 0;
  virtual void ImGui() = 0;
  virtual ~GameState() = default;

protected:
  EGameState m_state = EGameState::NONE;
};

#endif // GAMESTATE_H
