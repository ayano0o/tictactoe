#ifndef SWARM_H
#define SWARM_H

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
  inline Swarm(Board *board, char mark);
  inline void get_move() override;
  inline char get_mark() override;
  inline WinningCombos get_winning_combos() override;
};

#endif 
