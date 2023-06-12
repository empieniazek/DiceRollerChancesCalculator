//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include "Dice.h"

Dice::Dice(int & inputWalls) {
    if(inputWalls < 0){
        throw std::invalid_argument("Dice can't have negative walls number");
    }
    this->walls = inputWalls;
}

Dice::Dice(const int & inputWalls) {
    if(inputWalls < 0){
        throw std::invalid_argument("Dice can't have negative walls number");
    }
    this->walls = inputWalls;
}

int Dice::RollWithReRoll(std::default_random_engine & mt) const {
    int lastRoll = Dice::Roll(mt);
    int sum = lastRoll;
    while (lastRoll == walls){
        lastRoll = Dice::Roll(mt);
        sum += lastRoll;
    }
    return sum;
}

std::string Dice::name() const {
    return "d" + std::to_string(this->walls);
}

Dice::Dice() {
    walls = 6;
}

int Dice::getWalls() const {
    return walls;
}

int Dice::Roll(std::default_random_engine &mt) const {
    return (int) mt() % walls + 1;
}
