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

   int games_played = 0;
   int player_one_wins = 0;
   int player_two_wins = 0;
   int ties = 0;

public:
   Game(Console *console, GameState *game_state, Player *player_one, Player *player_two);
   void start();
   void generate_report(); 
};
