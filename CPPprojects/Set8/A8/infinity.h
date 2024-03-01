/* CSCI 261 Assignment 7
 *
 * Author: Matthew Kouba, section b
 *
 * There will be trivia based on the Avengers!
 */

// The include section adds extra definitions from the C++ standard library.
#pragma once

#include <iostream> // For cin, cout, etc.
#include <cmath>
#include <string>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

class gauntlet {
    public:
    gauntlet();
    void introduction();
    void riddleForSpaceStone();
    void riddleForRealityStone();
    void riddleForPowerStone();
    void riddleForMindStone();
    void riddleForTimeStone();
    void riddleForSoulStone();
    bool getSpace();
    bool getReality();
    bool getPower();
    bool getMind();
    bool getTime();
    bool getSoul();
    void stoneCheck();
    
    private:
    bool stone1;
    bool stone2;
    bool stone3;
    bool stone4;
    bool stone5;
    bool stone6;
};
