#pragma once

#include <vector>

class WinningCombos
{
private:
  std::vector<std::vector<int>> winning_combos;

public:
  WinningCombos()
  {
    std::vector<int> combo_one;
    combo_one.push_back(1);
    combo_one.push_back(2);
    combo_one.push_back(3);
    this->winning_combos.push_back(combo_one);

    std::vector<int> combo_two;
    combo_two.push_back(4);
    combo_two.push_back(5);
    combo_two.push_back(6);
    this->winning_combos.push_back(combo_two);

    std::vector<int> combo_three;
    combo_three.push_back(7);
    combo_three.push_back(8);
    combo_three.push_back(9);
    this->winning_combos.push_back(combo_three);

    std::vector<int> combo_four;
    combo_four.push_back(1);
    combo_four.push_back(4);
    combo_four.push_back(7);
    this->winning_combos.push_back(combo_four);

    this->winning_combos[4][0] = 2;
    this->winning_combos[4][1] = 5;
    this->winning_combos[4][2] = 8;

    this->winning_combos[5][0] = 3;
    this->winning_combos[5][1] = 6;
    this->winning_combos[5][2] = 9;

    this->winning_combos[6][0] = 1;
    this->winning_combos[6][1] = 5;
    this->winning_combos[6][2] = 9;

    this->winning_combos[7][0] = 3;
    this->winning_combos[7][1] = 5;
    this->winning_combos[7][2] = 7;
  }

  WinningCombos(std::vector<int> additional_combo)
  {
    std::vector<int> combo_one;
    combo_one.push_back(1);
    combo_one.push_back(2);
    combo_one.push_back(3);
    this->winning_combos.push_back(combo_one);

    std::vector<int> combo_two;
    combo_two.push_back(4);
    combo_two.push_back(5);
    combo_two.push_back(6);
    this->winning_combos.push_back(combo_two);

    std::vector<int> combo_three;
    combo_three.push_back(7);
    combo_three.push_back(8);
    combo_three.push_back(9);
    this->winning_combos.push_back(combo_three);

    std::vector<int> combo_four;
    combo_four.push_back(1);
    combo_four.push_back(4);
    combo_four.push_back(7);
    this->winning_combos.push_back(combo_four);

    this->winning_combos[4][0] = 2;
    this->winning_combos[4][1] = 5;
    this->winning_combos[4][2] = 8;

    this->winning_combos[5][0] = 3;
    this->winning_combos[5][1] = 6;
    this->winning_combos[5][2] = 9;

    this->winning_combos[6][0] = 1;
    this->winning_combos[6][1] = 5;
    this->winning_combos[6][2] = 9;

    this->winning_combos[7][0] = 3;
    this->winning_combos[7][1] = 5;
    this->winning_combos[7][2] = 7;

    this->winning_combos.push_back(additional_combo);
  }

  std::vector<std::vector<int>> all()
  {
    return this->winning_combos;
  }
};
