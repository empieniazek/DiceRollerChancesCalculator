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
    std::mt19937_64 mt;
public:
    Dice();
    Dice(int & inputWalls);
    Dice(const int & inputWalls);

    int Roll();

    int RollWithReRoll();

    std::string name() const;

    int getWalls() const;
};


#endif //DICEROLLER_DICE_H
