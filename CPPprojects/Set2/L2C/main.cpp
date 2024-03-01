/* CSCI 261 Assignment 1: Lab 2C (Rock Paper Scissors)
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
    
    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
    cout << "Player one: ";      // make statement and set up for input
    
    cin >> RPS;      // input a letter
    
    cout << endl;
    cout << endl;    // Spacing Purposes
    
    srand(time(0));  // Random - seed: time
    
    cout << "Player choose " << RPS << endl;
    cout << "Computer choose " << (rand() % 3) << endl;   // Final Statement
        
    return 0; // signals the operating system that our program ended OK.
}