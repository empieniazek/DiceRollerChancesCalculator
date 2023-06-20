//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef DICEROLLER_DICE_H
#define DICEROLLER_DICE_H


#include <string>
#include <random>

class Dice {
private:

private:
    int walls;
public:
    Dice();
    Dice(int & inputWalls);
    Dice(const int & inputWalls);

    int Roll(std::default_random_engine & mt) const;

    int RollWithReRoll(std::default_random_engine & mt) const;

    std::string name() const;

    int getWalls() const;
};


#endif //DICEROLLER_DICE_H
