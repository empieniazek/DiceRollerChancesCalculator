//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef DICEROLLER_THROW_H
#define DICEROLLER_THROW_H

#include <string>
#include <random>
#include <vector>
#include "Dice.h"
#include <mutex>

class Throw {
private:
    std::vector<Dice> dices;
    int countNumber{};
    std::mutex mtx;

    void RollAndAddToVar(Dice & dice, std::vector<int> & desiredLoc);
public:
    Throw();
    Throw(int inputRollNumber, int inputCountNumber, int inputDicesWalls);

    int Roll();

    int RollForPt(int & pt);

    std::string name() const;
};


#endif //DICEROLLER_THROW_H
