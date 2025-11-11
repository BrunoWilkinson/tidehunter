#ifndef BUTTON_H
#define BUTTON_H

#include "Object.h"

class Button : public Object {
public:
#ifndef NDEBUG
  void ImGui(SDL_Renderer *renderer) override;
#endif

private:
  bool m_isHover = false;
  bool m_isEnabled = true;

  SDL_Event m_clickEvent;
};

#endif // BUTTON_H
