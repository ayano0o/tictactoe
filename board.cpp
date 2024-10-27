#include "board.hpp"

void Board::clear() {
  for (int i = 0; i < 9; i++) {
    this->moves[i] = '1' + i;
  }
}

void Board::move(int i, char m) {
  if (i > 0 && i < 10) {
    this->moves[i - 1] = m;
  }
}

char Board::get_mark(int i) {
  return this->moves.at(i - 1);
}

bool Board::cellOccupation(int i) {
  return moves.at(i - 1) == 'X' || moves.at(i - 1) == 'O';
}
