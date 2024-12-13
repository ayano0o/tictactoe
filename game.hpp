#pragma once

#include "game_state.hpp"
#include "console.hpp"
#include "player.hpp"

class Game
{
private:
  Console *console;
  GameState *game_state;
  Player *player_one;
  Player *player_two;
  Player *current_player;
  Player *other_player;

public:
  inline Game(Console *console, GameState *game_state, Player *player_one, Player *player_two);
  inline void start();
};
