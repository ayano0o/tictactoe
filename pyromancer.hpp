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
  inline Pyromancer(Board *board, char mark);
  inline void get_move() override;
  inline char get_mark() override;
  inline WinningCombos get_winning_combos() override;
};
