// Gabe Alcantar Lopez Section B
#include "math.h"

using namespace std;

magicItem::magicItem(){   
    _mathProblem = "What is 5 cubed?";
    _answer = 125;
    _prize = "Mad respect for being a math wizard!";
    _introduction="Are you a math wizard? To prove it, you must answer the following math problem correctly!"; 
}
    

//function that returns introduction   
string magicItem::introduction() {
    return _introduction;
    
}

//function that returns prize
string magicItem::getPrize() {
    return _prize;
}

//function that returns math problem
string magicItem::getMathProblem() {
    return _mathProblem;
}

//function that checks if user guess is correct
bool magicItem::checkAnswer() {
    if (_guess == 125){
         return 1;
    }
    else {
        return 0;
    }
}
    
    
//function that sets guess 
void magicItem::setAnswer( int g ) {
    
       _guess = g;
}


