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

public:
  GameState(Board *board);
  std::string current_state(Player *current_player);
};
