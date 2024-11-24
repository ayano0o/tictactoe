#include <iostream>
#include <vector>

#include "swarm.hpp"

Swarm::Swarm(Board *board, char mark)
{
  this->board = board;
  this->mark = mark;

  std::vector<int> additional_win = {1, 3, 7, 9};
  this->combos = WinningCombos(additional_win);
}

char Swarm::get_mark()
{
  return this->mark;
}

WinningCombos Swarm::get_winning_combos()
{
  return this->combos;
}

void Swarm::get_move()
{
    int move;
    bool valid = false;

    while (!valid)
    {
        std::cout << "What is your move? ";
        std::cin >> move;

        if (std::cin.fail())
        {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Invalid input! Please enter a number.\n";
            continue;
        }

        if (move < 0 || move >= board->get_mark(move))
        {
            std::cout << "Invalid move! Please enter a number between 0 and " << board->get_mark(move) - 1 << ".\n";
        }
        else if (!board->cellOccupation(move))
        {
            std::cout << "That cell is already occupied! Please choose another one.\n";
        }
        else
        {
            valid = true; 
        }
    }

    this->board->move(move, this->mark);
}
