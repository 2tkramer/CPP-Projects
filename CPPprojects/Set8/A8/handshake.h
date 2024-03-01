// Austin Rich, Section B
// Header File for A7

#pragma once
// Include elements
#include <iostream>
#include <string>
using namespace std;
// define new class
class MagicHand {
    
    public:
        MagicHand(); // Only Constructor Used
        string getPrize(); // Getter 1
        string getHand(); // Getter 2
        bool isCorrect(string s, string a); // Function 1
        void introduction(); // Function 2
        void thankYou(); // Function 3
        
    private:
        //void introduction(); // Function 2
        //void thankYou(); // Function 3
        string hand; // Data Member 1
        string prize; // Data Member 2
    
    
};