/* CSCI 261 Assignment 1: Lab 2D (Rock Paper Scissors)
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

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    
    char RPS;
    char R;
    char r;
    char P;
    char p;
    char S;
    char s;
    int randNum;
    
    
    srand(time(0));             // Random - seed: time
    
    randNum = (rand() % 3);
    
    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
    cout << "Your choice: ";     // make statement and set up for input
    
    cin >> RPS;    // input a letter
    
    cout << endl;  // Spacing Purposes
    
    if (RPS == 'R') {
        cout << "Player choose Rock" << endl;  // Uppercase R if statement
        cout << "Computer choose ";            // Final Statement
        
        if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;        // Computer output
        }
    }
    
    else if (RPS == 'r') {
        cout << "Player choose Rock" << endl;  // Lowercase r if statement
        cout << "Computer choose ";            // Final Statement 
        
         if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;        // Computer output
        }
    }
    
    else if (RPS == 'P') {
        cout << "Player choose Paper" << endl; // Uppercase P if statement
        cout << "Computer choose ";            // Final Statement
        
         if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;        // Computer output
        }
    }
    
    else if (RPS == 'p') {
        cout << "Player choose Paper" << endl;// Lowercase p if statement
        cout << "Computer choose ";           // Final Statement
        
         if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;       // Computer output
        }
    }
    
    else if (RPS == 'S') {
        cout << "Player choose Scissors" << endl; // Uppercase S if statement
        cout << "Computer choose ";           // Final Statement
        
         if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;      // Computer output
        }
    }
    
    else if (RPS == 's') {
        cout << "Player choose Scissors" << endl; // Lowercase s if statement
        cout << "Computer choose ";          // Final Statement
        
         if (randNum == 0) {
            cout << "Rock" << endl;
        }
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;       // Computer output
        }
    }
    
    else {
        cout << "Oops! Please Enter either R, P, or S to play.";      // Computer output
    }
    
    cout << endl; 
        
    return 0; // signals the operating system that our program ended OK.
}