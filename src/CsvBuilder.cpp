//
// Created by Maciej Pieniążek on 10/06/2023.
//

#include "CsvBuilder.h"


CsvBuilder::CsvBuilder() = default;

void CsvBuilder::BuildCsv(const std::string& dir, std::default_random_engine &mt) const {
    std::ofstream myFile;
    myFile.open (dir);

    // add headers
    myFile << "RollWithReRoll;Avg";

    for(int i = this->minPt; i <= this->maxPt; i += this->incPt){
        myFile << ";" + std::to_string(i);
    }
    myFile << '\n';

    // add content
    for(int rollDice = this->minRoll; rollDice <= this->maxRoll; rollDice++){
        for(int countDice = this->minCount; countDice <= this->maxCount && countDice <= rollDice; countDice++){
            std::cout << "StartCounting " + std::to_string(rollDice) + "z" + std::to_string(countDice) + '\n';
            std::vector<std::string> values = CsvBuilder::CreateRowFor(rollDice, countDice, mt);
            std::cout << "Finished percent: " +  std::to_string((double)((rollDice-minRoll)*maxCount + countDice )/(maxRoll-minRoll+1)*maxCount ) + '\n';

            for(int i = 0; i < values.size(); i++){
                myFile << values[i];

                if(i < values.size()-1){
                    myFile << ";";

                }
            }
            myFile << "\n";
        }
    }
    myFile.close();
}

std::vector<std::string> CsvBuilder::CreateRowFor(int rollDice, int countDice, std::default_random_engine &mt) const {
    Calculator calc = Calculator(rollDice, countDice);
    std::vector<std::string> out;

    // add row header
    out.push_back(std::to_string(rollDice) + "z" + std::to_string(countDice));

    std::string s = std::to_string(calc.RollForAvg(this->times, mt));
    std::replace( s.begin(), s.end(), '.', ','); // replace all 'x' to 'y'
    // add avg outcome
    out.push_back(s);

    // add chances for passing
    for(int i = this->minPt; i <= this->maxPt; i += this->incPt){
        double val = calc.RollForPt(this->times, i, mt);
        s = std::to_string(val);
        std::replace( s.begin(), s.end(), '.', ','); // replace all 'x' to 'y'
        out.push_back(s);
    }

    return out;
}
