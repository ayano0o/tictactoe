#pragma once

#include <string>
#include <vector>

#include "board.hpp"
#include "player.hpp"

class GameState
{
private:
  Board *board;
   bool winning_combo(std::vector<int> combo);
   std::string select_winner(int cell);
    
    int games_played = 0;
    int player_one_wins = 0;
    int player_two_wins = 0;
    int ties = 0;

public:
   GameState(Board *board);
   void reset() {games_played = player_one_wins = player_two_wins = ties = 0;}
   std::string current_state(Player *current_player);
};
