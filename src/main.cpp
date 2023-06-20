#include <iostream>
#include "CsvBuilder.h"
#include <random>
#include <chrono>
#include "Dice.h"

int main() {
    std::default_random_engine mt(std::chrono::steady_clock::now().time_since_epoch().count());

    CsvBuilder builder;
    builder.BuildCsv("pred.csv", mt);

}
