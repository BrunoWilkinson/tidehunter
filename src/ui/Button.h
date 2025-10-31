#ifndef BUTTON_H
#define BUTTON_H

#include <SDL3/SDL.h>

class Button {
public:
  void Render();
  void ImGui();

private:
  bool m_isHover = false;
  bool m_isEnabled = true;

  SDL_Event m_clickEvent;
};

#endif // BUTTON_H
