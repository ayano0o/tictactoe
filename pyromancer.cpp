#include <iostream>

#include "pyromancer.hpp"

Pyromancer::Pyromancer(Board *board, char mark)
{
  this->board = board;
  this->mark = mark;
  this->combos = WinningCombos();
}

char Pyromancer::get_mark()
{
  return this->mark;
}

WinningCombos Pyromancer::get_winning_combos()
{
  return this->combos;
}

void Pyromancer::get_move()
{
  // We need to validate this move!
  // Oops! Shall We Try Again lab
  int option;
  std::cout << "Do you want to (1) enter a cell or (2) explode the board?" << std::endl;
  std::cin >> option;
  if (option == 1)
  {
    std::cout << "Sounds good! Enter a cell between 1 and 9." << std::endl;
    int move;
    std::cin >> move;
    this->board->move(move, this->mark);
  }
  else
  {
    std::cout << "Exploding the board!" << std::endl;
    this->board->clear();
  }
}
