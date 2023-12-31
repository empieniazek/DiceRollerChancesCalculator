//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef DICEROLLER_CSVBUILDER_H
#define DICEROLLER_CSVBUILDER_H

#include "Calculator.h"
#include <iostream>
#include <fstream>
#include <random>
#include <vector>
#include <string>
class CsvBuilder {
private:
    int times = 300000;

    int minPt = 5;
    int maxPt = 80;
    int incPt = 5;

    int minRoll = 1;
    int maxRoll = 10;

    int minCount = 1;
    int maxCount = 10;


public:
    CsvBuilder();
    void BuildCsv(const std::string& dir) const;
    std::vector<std::string> CreateRowFor(int rollDice, int countDice) const;
    int GetActualRollsNumber() const;
};


#endif //DICEROLLER_CSVBUILDER_H
