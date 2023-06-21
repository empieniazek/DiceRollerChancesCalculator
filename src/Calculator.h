//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef DICEROLLER_CALCULATOR_H
#define DICEROLLER_CALCULATOR_H

#include <random>
#include "Throw.h"

class Calculator {
private:
    Throw mainThrow;

public:
    Calculator(int diceRoll, int diceCount, int diceWalls = 10);

    double RollForAvg(int xTimes);
    double RollForPt(int xTimes, int pt);

};

#endif //DICEROLLER_CALCULATOR_H
