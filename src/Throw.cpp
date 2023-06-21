//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include <algorithm>
#include "Throw.h"
#include "vector"

Throw::Throw(int inputRollNumber, int inputCountNumber, int inputDicesWalls=10) {
    for(int i = 0; i < inputRollNumber; i++){
        Dice dice = Dice(inputDicesWalls);
        dices.push_back(dice);
    }
    this->countNumber = inputCountNumber;
}

Throw::Throw(){
    countNumber = 0;
}

int Throw::Roll() const {
    std::vector<int> allDicesOutcome;
    for(Dice dice: dices){
        allDicesOutcome.push_back(dice.RollWithReRoll());
    }
    std::sort(allDicesOutcome.begin(), allDicesOutcome.end(), std::greater<>());
    int sum = 0;
    for(int i = 0; i < countNumber; i++){
        sum += allDicesOutcome[i];
    }
    return sum;
}

int Throw::RollForPt(int  & pt) const {
    return (int) Throw::Roll() > pt;
}

std::string Throw::name() const {
    return std::to_string(dices.size()) + "z" + std::to_string(countNumber);
}
