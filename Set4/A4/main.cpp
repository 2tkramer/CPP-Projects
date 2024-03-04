/* CSCI 261 Assignment 1: A4 (Hangman)
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For fixed, setprecision, etc.
#include <cstdlib>  // For rand commmands
#include <ctime>    // For rand(time())
#include <cstdbool> // For boolean statements
#include <string>   // For strings
#include <cmath>    // For sin, cos, etc.
#include "cookies.h"// 
#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

bool processGuess(char guess, char* secrword ) {
    
    
    for (int i = 0; i < 7; ++i) {
        
        if (toupper(guess) == secrword[i]) {
    return true;
        }
    }
    
    return false;
}


int main() {
    
    const int NUM_LETTERS = 7;
    
    char secrword[] = {'C','O','O','K','I','E','S'};
    
    
    int counter = 7;
    
    
    while(counter > 0) {
       char guess;
        cout << "Please enter a single letter guess: ";
        cin >> guess;
        cout << endl;
        bool check;
        check = processGuess(guess, secrword);
        if(!check) {
            counter--;
            cout << "Not in word" << endl;
        }
        else {
            cout << "It's in the word!" << endl;
        }
        cout << endl;
    }


    return 0; // signals the operating system that our program ended OK.
}