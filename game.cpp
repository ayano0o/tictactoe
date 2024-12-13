#include <iostream>
#include <string>
#include <fstream>

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

void Game::generate_report()
{
    std::ofstream report("game_report.txt");

    if (report.is_open())
    {
        report << "Tic-Tac-Toe Game Report\n";
        report << "========================\n";
        report << "Total games played: " << games_played << "\n";
        report << "Player One Wins: " << player_one_wins << "\n";
        report << "Player Two Wins: " << player_two_wins << "\n";
        report << "Ties: " << ties << "\n";

        report.close();
        std::cout << "Game report saved to 'game_report.txt'.\n";
    }
    else
    {
        std::cerr << "Error: Could not create game report file.\n";
    }
}

void Game::start()
{
    while (true)
    {
        while (game_state->current_state(current_player) == "in-progress" &&
               game_state->current_state(other_player) == "in-progress")
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
        std::string state = game_state->current_state(current_player);
        std::cout << state << std::endl;

        if (state == "win")
        {
            if (current_player == player_one)
                player_one_wins++;
            else
                player_two_wins++;
        }
        else if (state == "tie")
        {
            ties++;
        }
        games_played++;

        std::cout << "Play again? (y/n): ";
        char choice;
        std::cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            generate_report(); 
            break;
        }

        game_state->reset();
    }
}
