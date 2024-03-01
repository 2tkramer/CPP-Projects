#include "cookies.h"
#include <iostream>
#include <stdio.h>
#include <ctype.h>


bool processGuess(char guess, char* secrword ) {
    
    
    for (int i = 0; i < 7; ++i) {
        
        if (toupper(guess) == secrword[i]) {
    return true;
        }
    }
    
    return false;
}