#pragma once

class GameStats {
public:
    int games_played = 0;
    int player_one_wins = 0;
    int player_two_wins = 0;
    int ties = 0;

    void reset() {
        games_played = player_one_wins = player_two_wins = ties = 0;
    }
};
