#include <iostream>

#include "human_player.hpp"

HumanPlayer::HumanPlayer(Board *board, char mark)
{
  this->board = board;
  this->mark = mark;
  this->combos = WinningCombos();
}

char HumanPlayer::get_mark()
{
  return this->mark;
}

void HumanPlayer::get_move() {
  int move;
  bool validMove = false;

  while (!validMove) {
    std::cout << "What is your move? ";
    std::cin >> move;

    if (move < 1 || move > 9) {
      std::cout << "Invalid move! Please enter a number between 1 and 9." << std::endl;
      continue;
    }

    if (!this->board->cellOccupation(move)) {
      this->board->move(move, this->mark);
      validMove = true;
    } else {
      std::cout << "That cell is already taken! Please choose another." << std::endl;
    }
  }
}
