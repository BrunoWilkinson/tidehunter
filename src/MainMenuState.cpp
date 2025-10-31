#include "imgui.h"

#include "MainMenuState.h"

MainMenuState::MainMenuState() { m_state = EGameState::MENU; }

SDL_AppResult MainMenuState::Input(void *appstate, const SDL_Event *event) {
  switch (event->type) {
  case SDL_EVENT_KEY_DOWN: {
    if (event->key.key == SDLK_UP) {
      SDL_Log("KEY UP\n");
    }
    if (event->key.key == SDLK_DOWN) {
      SDL_Log("KEY DOWN\n");
    }
    if (event->key.key == SDLK_LEFT) {
      SDL_Log("KEY LEFT\n");
    }
    if (event->key.key == SDLK_RIGHT) {
      SDL_Log("KEY RIGHT\n");
    }
  }
  default: {
    return SDL_APP_CONTINUE;
  }
  }
}

void MainMenuState::Render(void *appstate, SDL_Renderer *renderer) {
  const ImGuiIO &io = ImGui::GetIO();
  const char *message = "Hello World!";
  const float scale = SDL_GetDisplayContentScale(SDL_GetPrimaryDisplay());
  /* Center the message and scale it up */
  int w = 0;
  int h = 0;
  SDL_GetRenderOutputSize(renderer, &w, &h);
  SDL_SetRenderScale(renderer, scale, scale);
  const float x =
      (w / scale - SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE * SDL_strlen(message)) /
      2;
  const float y = (h / scale - SDL_DEBUG_TEXT_FONT_CHARACTER_SIZE) / 2;

  /* Draw the message */
  SDL_SetRenderScale(renderer, io.DisplayFramebufferScale.x,
                     io.DisplayFramebufferScale.y);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderDebugText(renderer, x, y, message);
}

void MainMenuState::ImGui() {
  const ImGuiIO &io = ImGui::GetIO();
  ImGui::Begin("Main Menu");
  ImGui::Text("This is some useful text.");
  ImGui::Text("Application average %.3f ms/frame (%.1f FPS)",
              1000.0f / io.Framerate, io.Framerate);
  ImGui::End();
}
