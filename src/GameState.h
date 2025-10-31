#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <Object.h>

enum class EGameState { MENU, LOBBY, BATTLE, SETTINGS, NONE };

class GameState : public Object {
public:
  EGameState GetState() const { return m_state; }

protected:
  EGameState m_state = EGameState::NONE;
};

#endif // GAMESTATE_H
