#include <iostream>
#include <cassert>

#include "board.hpp"
#include "console.hpp"

int main()
{
  Board board;
  Console console(&board);

  assert(console.display() == " 1 | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(1, 'X');

  assert(console.display() == " X | 2 | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(2, 'O');

  assert(console.display() == " X | O | 3 \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(3, 'W');

  assert(console.display() == " X | O | W \n-----------\n 4 | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(4, 'X');

  assert(console.display() == " X | O | W \n-----------\n X | 5 | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(5, 'O');

  assert(console.display() == "  X | O | W \n-----------\n X | O | 6 \n-----------\n 7 | 8 | 9 \n");

  board.move(6, 'W');

  assert(console.display() == " X | O | W \n-----------\n X | O | W \n-----------\n 7 | 8 | 9 \n");

  board.move(7, '0');

  assert(console.display() == " X | O | W \n-----------\n X | O | W \n-----------\n O | 8 | 9 \n");
 
  board.move(8, 'W');

  assert(console.display() == " X | O | W \n-----------\n X | O | W \n-----------\n O | W | 9 \n");

  board.move(9, 'X');

  assert(console.display() == " X | O | W \n-----------\n X | O | W \n-----------\n O | W | X \n");


  // I would write nine tests that mark each of the nine cells
  std::cout << "All of the tests have passed!" << std::endl;
}
