#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"
#include "winning_combos.hpp"

class Pyromancer : public Player
{
private:
  Board *board;
  WinningCombos combos;
  char mark;

public:
  Pyromancer(Board *board, char mark);
  void get_move() override;
  char get_mark() override;
  WinningCombos get_winning_combos() override;
};
