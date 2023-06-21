//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include <stdexcept>
#include "Dice.h"

Dice::Dice() {
    walls = 6;
    this->mt = std::mt19937_64(std::chrono::steady_clock::now().time_since_epoch().count());
}

Dice::Dice(int & inputWalls) {
    if(inputWalls <= 1){
        throw std::invalid_argument("Dice should have at least two walls");
    }
    this->walls = inputWalls;
    this->mt = std::mt19937_64(std::chrono::steady_clock::now().time_since_epoch().count());
}

Dice::Dice(const int & inputWalls) {
    if(inputWalls <= 1){
        throw std::invalid_argument("Dice should have at least two walls");
    }
    this->walls = inputWalls;
    this->mt = std::mt19937_64(std::chrono::steady_clock::now().time_since_epoch().count());
}

int Dice::RollWithReRoll(){
    int lastRoll = Dice::Roll();
    int sum = lastRoll;
    while (lastRoll == walls){
        lastRoll = Dice::Roll();
        sum += lastRoll;
    }
    return sum;
}

std::string Dice::name() const {
    return "d" + std::to_string(this->walls);
}

int Dice::getWalls() const {
    return walls;
}

int Dice::Roll(){
    return (int) (mt() % walls) + 1;
}
