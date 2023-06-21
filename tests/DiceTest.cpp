//
// Created by Maciej Pieniążek on 12/06/2023.
//

#include "Dice.h"
#include "gtest/gtest.h"
#include <random>

TEST(Dice, DiceCosntructor) {
    std::default_random_engine mt(std::chrono::steady_clock::now().time_since_epoch().count());

    for(int i = 0; i < 1000; i++){
        int desiredWalls = (int) mt()%1000 + 2;
        Dice di = Dice(desiredWalls);

        ASSERT_EQ(di.getWalls(), desiredWalls);
    }
    ASSERT_ANY_THROW(Dice d0 = Dice(1)) << "Dice cant have 1 wall";

    ASSERT_ANY_THROW(Dice d0 = Dice(0)) << "Dice cant have 0 walls";

    ASSERT_ANY_THROW(Dice dNegative = Dice(-1)) << "Dice cant have negative wall value";

    Dice d7 = Dice(7);
    Dice d8 = Dice(8);
    Dice d9 = Dice(9);
    ASSERT_EQ(d7.getWalls(), 7);
    ASSERT_EQ(d8.getWalls(), 8);
    ASSERT_EQ(d9.getWalls(), 9);

    Dice d6 = Dice();
    ASSERT_EQ(d6.getWalls(), 6) << "Standard dice has 6 walls";
}

TEST(Dice, DiceString) {
    std::default_random_engine mt(std::chrono::steady_clock::now().time_since_epoch().count());

    for(int i = 0; i < 1000; i++){
        int desiredWalls = (int) mt();
        Dice di = Dice(desiredWalls);

        ASSERT_EQ(di.name(), "d" + std::to_string(desiredWalls));
    }

    Dice d6 = Dice();
    Dice d7 = Dice(7);
    Dice d8 = Dice(8);
    Dice d9 = Dice(9);
    ASSERT_EQ(d6.name(), "d" + std::to_string(6));
    ASSERT_EQ(d7.name(), "d" + std::to_string(7));
    ASSERT_EQ(d8.name(), "d" + std::to_string(8));
    ASSERT_EQ(d9.name(), "d" + std::to_string(9));
}

TEST(Dice, DiceRoll) {
    std::default_random_engine mt(std::chrono::steady_clock::now().time_since_epoch().count());

    for(int i = 0; i < 10; i++){

        int desiredWalls = (int) mt();
        Dice di = Dice(desiredWalls);

        int errorCounter = 0;

        for(int j = 0; j < 1000 ; j++){

            int val = di.Roll();

            if( val <= 0 ){
                errorCounter++;
            }

            if( val > desiredWalls ){
                errorCounter++;
            }
        }

        ASSERT_EQ(errorCounter, 0);
    }
}

TEST(Dice, DiceRollWithReRoll) {
    std::default_random_engine mt(std::chrono::steady_clock::now().time_since_epoch().count());

    for(int i = 0; i < 10; i++){

        int desiredWalls = (int) (mt() % 9) + 2;
        Dice di = Dice(desiredWalls);

        int reRollCounter = 0;

        for(int j = 0; j < 10000 ; j++){

            int val = di.RollWithReRoll();
            if(val > desiredWalls){
                reRollCounter++;
            }
            std::cout << ((i*j) + j)/100000.0 << "\n";
        }
        ASSERT_TRUE(reRollCounter > 0) << "There was no case, where re-roll happened";
    }
}


