//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include <algorithm>
#include "CsvBuilder.h"


CsvBuilder::CsvBuilder() = default;

void CsvBuilder::BuildCsv(const std::string& dir) const {
    std::ofstream myFile;
    myFile.open (dir);

    // add headers
    myFile << "RollWithReRoll;Avg";

    for(int i = this->minPt; i <= this->maxPt; i += this->incPt){
        myFile << ";" + std::to_string(i);
    }
    myFile << '\n';

    int progressCounter = 0;
    int maxProgressCounterValue = this->GetActualRollsNumber();
    // add content
    for(int rollDice = this->minRoll; rollDice <= this->maxRoll; rollDice++){
        for(int countDice = this->minCount; countDice <= this->maxCount && countDice <= rollDice; countDice++){
            std::vector<std::string> values = CsvBuilder::CreateRowFor(rollDice, countDice);
            progressCounter++;

            for(int i = 0; i < values.size(); i++){
                myFile << values[i];

                if(i < values.size()-1){
                    myFile << ";";

                }
            }
            std::cout << "[Progres]: " + std::to_string(((double)progressCounter/maxProgressCounterValue)*100) + "\n";
            myFile << "\n";
        }
    }
    myFile.close();
}

std::vector<std::string> CsvBuilder::CreateRowFor(int rollDice, int countDice) const {
    Calculator calc = Calculator(rollDice, countDice);
    std::vector<std::string> out;

    // add row header
    out.push_back(std::to_string(rollDice) + "z" + std::to_string(countDice));

    std::string s = std::to_string(calc.RollForAvg(this->times));
    std::replace( s.begin(), s.end(), '.', ','); // replace all 'x' to 'y'
    // add avg outcome
    out.push_back(s);

    // add chances for passing
    for(int i = this->minPt; i <= this->maxPt; i += this->incPt){
        double val = calc.RollForPt(this->times, i);
        s = std::to_string(val);
        std::replace( s.begin(), s.end(), '.', ','); // replace all 'x' to 'y'
        out.push_back(s);
    }

    return out;
}

int CsvBuilder::GetActualRollsNumber() const {
    int actualRollsNumber = 0;
    for(int rollDice = this->minRoll; rollDice <= this->maxRoll; rollDice++){
        for(int countDice = this->minCount; countDice <= this->maxCount && countDice <= rollDice; countDice++){
            actualRollsNumber++;
        }
    }
    return actualRollsNumber;
}