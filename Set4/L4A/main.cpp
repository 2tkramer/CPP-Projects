/* CSCI 261 Assignment 1: L4A (Yahtzee!)
 *
 * Author: Taylor Kramer & Matthew Kouba
 */

#include <iostream> // For cin, cout, etc.
#include <cstdbool> // For boolean statements

using namespace std;



/* IS 
 * FUNCTION
 * FOR 
 * SHORT
 * STRAIGHT
 */

    
bool isSmallStraight( int die1, int die2, int die3, int die4, int die5 ) {
    bool Straight;
    
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    
    
        switch(die1) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die2) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die3) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die4) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die5) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        
    if ((ones + twos + threes + fours) >= 4) {
        Straight = true;
    }
    else if ((twos + threes + fours + fives) >= 4) {
        Straight = true;
    }
    else if ((threes + fours + fives + sixes) >= 4) {
        Straight = true;
    }
    else {
        Straight = false;
    }
    
    return Straight;
}

/* SCORE 
 * FUNCTION
 * FOR 
 * SHORT
 * STRAIGHT
 */
 
 // !!!!Needed to copy the first function (isFunction) to run the second function!!!!!!!!!!!!!!!!,

bool isSmallStraight( int die1, int die2, int die3, int die4, int die5 ) {
    bool Straight;
    
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;
    int fives = 0;
    int sixes = 0;
    
    
        switch(die1) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die2) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die3) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die4) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        switch(die5) {
            case 1:
            ones = 1;
            break;
            case 2:
            twos = 1;
            break;
            case 3:
            threes = 1;
            break;
            case 4:
            fours = 1;
            break;
            case 5:
            fives = 1;
            break;
            case 6:
            sixes = 1;
            break;
        }
        
        
    if ((ones + twos + threes + fours) >= 4) {
        Straight = true;
    }
    else if ((twos + threes + fours + fives) >= 4) {
        Straight = true;
    }
    else if ((threes + fours + fives + sixes) >= 4) {
        Straight = true;
    }
    else {
        Straight = false;
    }
    
    return Straight;
}

 // This determines what the score is for those die

int scoreSmallStraight( int die1, int die2, int die3, int die4, int die5 ) {
    
    bool Straight = false;
    
    Straight = isSmallStraight( die1, die2, die3, die4, die5 );
    int score = 0;
    
    if (Straight == true) {
        score = 30;
    }
    
    return score;
}


