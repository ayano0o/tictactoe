#include <iostream>

#include "board.hpp"
#include "console.hpp"
#include "game_state.hpp"
#include "human_player.hpp"
#include "pyromancer.hpp"
#include "game.hpp"
#include "swarm.hpp"

int main()
{
  Board board;
  GameState game_state(&board);
  Console console(&board);
  Swarm player_one(&board, 'X');
  Pyromancer player_two(&board, 'O');
  Game game(&console, &game_state, &player_one, &player_two);

  game.start();
}
