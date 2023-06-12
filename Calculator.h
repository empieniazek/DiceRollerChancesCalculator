//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef FASTPROJECT_CALCULATOR_H
#define FASTPROJECT_CALCULATOR_H

#include <random>
#include "Throw.h"

class Calculator {
private:
    Throw mainThrow;

public:
    Calculator(int diceRoll, int diceCount, int diceWalls = 10);

    double RollForAvg(int xTimes, std::default_random_engine & mt);
    double RollForPt(int xTimes, int pt, std::default_random_engine & mt);

};

#endif //FASTPROJECT_CALCULATOR_H
