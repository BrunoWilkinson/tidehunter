#ifndef OBJECT_H
#define OBJECT_H

#include <SDL3/SDL.h>

class Object {
public:
  virtual SDL_AppResult Input(void *appstate, const SDL_Event *event) = 0;
  virtual void Render(void *appstate, SDL_Renderer *renderer) = 0;
#ifndef NDEBUG
  virtual void ImGui(SDL_Renderer *renderer) = 0;
#endif
};

#endif // OBJECT_H
