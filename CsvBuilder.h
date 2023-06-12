//
// Created by Maciej Pieniążek on 10/06/2023.
//

#ifndef FASTPROJECT_CSVBUILDER_H
#define FASTPROJECT_CSVBUILDER_H

typedef std::mt19937
typedef int std::default_random_engine;
int;

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
    void BuildCsv(const std::string& dir, std::default_random_engine &mt) const;
    std::vector<std::string> CreateRowFor(int rollDice, int countDice, std::default_random_engine & mt) const;
};


#endif //FASTPROJECT_CSVBUILDER_H
