/* CSCI 261 Assignment 1: A3 (Guess a Number)
 *
 * Author: Taylor Kramer
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For fixed, setprecision, etc.
#include <cstdlib>  // For rand commmands
#include <ctime>    // For rand(time())
#include <cstdbool> // For boolean statements
#include <string>   // For strings
#include <cmath>    // For sin, cos, etc.
// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    
    srand(time(0));
    int randNum;
    int userGuess;
    int triesNum = 0;
    const int LOW = 0;
    const int HIGH = 100;
    const int TOO_CLOSE_DIFFERENCE = 5;
    const int TOO_HIGH_DIFFERENCE = 25;
    
    randNum = rand() % 100;
    
    cout << endl;
    
    cout << "Ready to play Guess a Number?" << endl;
    
        
    do {
        
        cout << "Pick a number between 0 and 100: ";
        cin >> userGuess;
        cout << endl;
        
        if ((userGuess < LOW) || (userGuess > HIGH)) {
        
            cout << "Oops! Please try again and enter a number BETWEEN 0 & 100" << endl;
            return 0;
        
        }
        
        else if (userGuess < randNum) {
            
            cout << "Too low!";
            
            if ((randNum - userGuess) <= TOO_CLOSE_DIFFERENCE) {
                cout << " Oooh you're close!" << endl;
            }
            else if ((randNum - userGuess) >= TOO_HIGH_DIFFERENCE) {
                cout << " Not even close!" << endl;
            }
            else {
                cout << endl;
            }
        }
        else if (userGuess > randNum) {
            
            cout << "Too high!";
            
            if ((userGuess - randNum) <= TOO_CLOSE_DIFFERENCE) {
                cout << " Oooh you're close!" << endl;
            }
            else if ((userGuess - randNum) >= TOO_HIGH_DIFFERENCE) {
                cout << " Not even close!" << endl;
            }
            else {
                cout << endl;
            }
        }
        
        ++triesNum;
        
        
    } while (!(userGuess == randNum));
        
      cout << "You got it! You won the game in " << triesNum << " tries." << endl;
    
    
    return 0; // signals the operating system that our program ended OK.
}