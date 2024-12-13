#include <iostream>

#include "game.hpp"

Game::Game(Console *console, GameState *game_state, Player *player_one, Player *player_two)
{
  this->console = console;
  this->game_state = game_state;
  this->player_one = player_one;
  this->player_two = player_two;
  this->current_player = player_one;
  this->other_player = player_two;
}

void Game::start()
{
  while (game_state->current_state(current_player) == "in-progress" && game_state->current_state(other_player) == "in-progress")
  {
    std::cout << console->display();
    current_player->get_move();
    if (current_player->get_mark() == 'X')
    {
      current_player = player_two;
      other_player = player_one;
    }
    else
    {
      current_player = player_one;
      other_player = player_two;
    }
  }

  std::cout << game_state->current_state(current_player) << std::endl;
  std::cout << game_state->current_state(other_player) << std::endl;
}
