#pragma once

#include <array>

class Board
{
private:
  std::array<char, 9> moves = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

public:
  inline void clear();
  inline void move(int i, char m);
  inline char get_mark(int i);
  inline bool cellOccupation(int i);
};
