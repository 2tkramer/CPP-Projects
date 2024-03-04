// Gabe Alcantar Lopez Section B
#include <string>
using namespace std;


#pragma once


class magicItem {
    
    private:
        int _answer;  
        string _mathProblem;
        string _prize;
        string _introduction;
        int _guess;
    
    public:
        magicItem();
        string getMathProblem();
        bool checkAnswer();
        string introduction();
        string getPrize();
        void setAnswer( int g );
};

