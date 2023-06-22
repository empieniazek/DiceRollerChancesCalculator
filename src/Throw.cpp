//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include <algorithm>
#include "Throw.h"
#include "vector"
#include <mutex>
#include <thread>

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

void Throw::RollAndAddToVar(Dice & dice, std::vector<int> & desiredLoc){
    auto val = dice.RollWithReRoll();
    mtx.lock();
    desiredLoc.push_back(val);
    mtx.unlock();
}

int Throw::Roll() {
    std::vector<int> allDicesOutcome;
    std::vector<std::thread> tasks;
    for(Dice & dice: dices){
        tasks.push_back(std::thread(&Throw::RollAndAddToVar, this, dice, allDicesOutcome));
    }
    for(auto & task : tasks){
        task.join();
    }

    std::sort(allDicesOutcome.begin(), allDicesOutcome.end(), std::greater<>());

    int sum = 0;
    for(int i = 0; i < countNumber; i++){
        sum += allDicesOutcome[i];
    }
    return sum;
}

int Throw::RollForPt(int  & pt) {
    return (int) Throw::Roll() > pt;
}

std::string Throw::name() const {
    return std::to_string(dices.size()) + "z" + std::to_string(countNumber);
}
