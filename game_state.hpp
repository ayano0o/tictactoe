#pragma once

#include <string>
#include <vector>

#include "board.hpp"
#include "player.hpp"

class GameState
{
private:
  Board *board;
  inline bool winning_combo(std::vector<int> combo);
  inline std::string select_winner(int cell);

public:
  inline GameState(Board *board);
  inline std::string current_state(Player *current_player);
};
