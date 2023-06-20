//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef DICEROLLER_THROW_H
#define DICEROLLER_THROW_H

#include <string>
#include <random>
#include <vector>
#include "Dice.h"

class Throw {
private:
    std::vector<Dice> dices;
    int countNumber{};

public:
    Throw();
    Throw(int inputRollNumber, int inuptCountNumber, int inputDicesWalls);

    int Roll(std::default_random_engine & mt) const;

    int RollForPt(std::default_random_engine & mt, int & pt) const;

    std::string name() const;
};


#endif //DICEROLLER_THROW_H
