#include <iostream>
#include <fstream>
#include "game_STATS.hpp"

using namespace std;

inline void update_stats(GameStats &stats, int winner) {
    stats.games_played++;
    if (winner == 1) {
        stats.player_one_wins++;
    } else if (winner == 2) {
        stats.player_two_wins++;
    } else {
        stats.ties++;
    }
}


inline void save_game_report(const GameStats &stats) {
    ofstream report("game_report.txt");
    if (report.is_open()) {
        report << "Tic-Tac-Toe Game Report\n";
        report << "-----------------------\n";
        report << "Games Played: " << stats.games_played << "\n";
        report << "Player One Wins: " << stats.player_one_wins << "\n";
        report << "Player Two Wins: " << stats.player_two_wins << "\n";
        report << "Ties: " << stats.ties << "\n";
        report.close();
        cout << "Game report saved to 'game_report.txt'.\n";
    } else {
        cerr << "Error: Could not write to game_report.txt\n";
    }
}

inline void end_game_prompt(GameStats &stats) {
    char choice;
    cout << "Play again? (y/n): ";
    cin >> choice;
    if (choice == 'n' || choice == 'N') {
        save_game_report(stats);
        cout << "Exiting the game. Goodbye!\n";
        exit(0);
    }
}

