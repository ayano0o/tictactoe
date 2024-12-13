#include <iostream>

#include "board.cpp"
#include "console.cpp"
#include "game_state.cpp"
#include "human_player.cpp"
#include "pyromancer.cpp"
#include "game.cpp"
#include "swarm.cpp"
#include "game_STATS.cpp"

int main()
{
  Board board;
  GameState game_state(&board);
  Console console(&board);
  Swarm player_one(&board, 'X');
  Pyromancer player_two(&board, 'O');
  Game game(&console, &game_state, &player_one, &player_two);

  game.start();
  return 0;
}
