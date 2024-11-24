#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"
#include "winning_combos.hpp"

class Swarm : public Player
{
private:
  Board *board;
  char mark;
  WinningCombos combos;

public:
  Swarm(Board *board, char mark);
  void get_move() override;
  char get_mark() override;
  WinningCombos get_winning_combos() override;
};
