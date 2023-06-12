//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include "Calculator.h"

Calculator::Calculator(int diceRoll, int diceCount, int diceWalls){
    this->mainThrow = Throw(diceRoll, diceCount, diceWalls);
}

double Calculator::RollForAvg(int xTimes, std::default_random_engine &mt) {
    double sum = 0;
    for(int i = 0; i < xTimes; i++){
        sum += mainThrow.Roll(mt);
    }
    return sum/xTimes;
}

double Calculator::RollForPt(int xTimes, int pt, std::default_random_engine &mt) {
    double sum = 0;
    for(int i = 0; i < xTimes; i++){
        sum += mainThrow.RollForPt(mt, pt);
    }
    return sum/xTimes;
}
