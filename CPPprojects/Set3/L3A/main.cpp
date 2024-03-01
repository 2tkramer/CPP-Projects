/* CSCI 261 Assignment 1: Lab 3A (Rock Paper Scissors)
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
#include <stdio.h> 

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.


main () {
    
    char RPS;
    char R;
    char r;
    char P;
    char p;
    char S;
    char s;
    char L;
    char l;
    char K;
    char k;
    int randNum;
    char Y;
    char y;
    char N;
    char n;
    int numTies;
    int numWins;
    int numLost;
    
    numTies = 0;
    numWins = 0;
    numLost = 0;
 
    srand(time(0));              // Random - seed: time
    
    randNum = (rand() % 5);

    char yesNo;

do {    
    
    cout << endl;
    
    cout << "Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter P, R, S, L, or K for Spock)" << endl;
    cout << "Your choice: ";     // make statement and set up for input
    
    cin >> RPS;    // input a letter
    
    cout << endl;  // Spacing Purposes
    
    if (RPS == 'R') {
        cout << "Player choose Rock" << endl;  // Uppercase R if statement
    }
    
    else if (RPS == 'r') {
        cout << "Player choose Rock" << endl;  // Lowercase r if statement
    }
    
    else if (RPS == 'P') {
        cout << "Player choose Paper" << endl; // Uppercase P if statement
    }
    
    else if (RPS == 'p') {
        cout << "Player choose Paper" << endl;   // Lowercase p if statement
    }
     
    else if (RPS == 'S') {
        cout << "Player choose Scissors" << endl; // Uppercase S if statement
    }
    
    else if (RPS == 's') {
        cout << "Player choose Scissors" << endl; // Lowercase s if statement
    }
    
    else if (RPS == 'L') {
        cout << "Player choose Lizzard" << endl; // Uppercase L if statement
    }
        
    else if (RPS == 'l') {
        cout << "Player choose Lizzard" << endl; // Lowercase l if statement
    }
        
    else if (RPS == 'K') {
        cout << "Player choose Spock" << endl; // Uppercase K if statement
    }
    
    else if (RPS == 'k') {
        cout << "Player choose Spock" << endl; // Lowercase k if statement
    }
    
    else {
        cout << "Oops! Please Enter either R, P, S, L, or K to play."; 
        return 0;                              // Computer output, end program
    }
    
    cout << "Computer choose ";                // Final Statement 
        
        if (randNum == 0) {
            cout << "Rock" << endl;
        }   
        else if (randNum == 1) {
            cout << "Paper" << endl;
        }
        else if (randNum == 2) {
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
        }
    
    cout << endl;
    cout << endl;
    
    switch (RPS) {                             // Converting to integers
        case 'R': // Rock
        case 'r':
          RPS = 0; 
          break;

        case 'P': // Paper
        case 'p':
          RPS = 1;
          break;
      
        case 'S': // Scissors
        case 's':
          RPS = 2;
          break;
          
        case 'L': // Lizard
        case 'l':
          RPS = 3;
          break;
          
        case 'K': // Spock
        case 'k':
          RPS = 4;
          break;
          
        default:
          cout << endl;
          break;
    }

    
    if (RPS == randNum) {                       // who wins/?
            cout << "It's a tie!" << endl;
            numTies = numTies + 1;
            
    }
    
    else if (RPS == 1 && randNum == 0) {
        cout << "Paper beats Rock. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }    
    
    else if (RPS == 1 && randNum == 2) {
        cout << "Scissors beats Paper. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 1 && randNum == 4) {
        cout << "Paper beats Spock. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 1 && randNum == 3) {
        cout << "Lizard beats Paper. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 0 && randNum == 2) {
        cout << "Rock beats Scissors. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 0 && randNum == 1) {
        cout << "Paper beats Rock. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 0 && randNum == 3) {
        cout << "Rock beats Lizard. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 0 && randNum == 4) {
        cout << "Spock beats Rock. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
        
    else if (RPS == 2 && randNum == 1) {
        cout << "Scissors beats Paper. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }

    else if (RPS == 2 && randNum == 0) {
        cout << "Rock beats Scissors. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 2 && randNum == 3) {
        cout << "Scissors beats Lizard. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 2 && randNum == 4) {
        cout << "Spock beats Scissors. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 3 && randNum == 1) {
        cout << "Lizard beats Paper. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 3 && randNum == 0) {
        cout << "Rock beats Lizard. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 3 && randNum == 4) {
        cout << "Lizard beats Spock. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 3 && randNum == 3) {
        cout << "Scissors beats Lizard. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 4 && randNum == 0) {
        cout << "Spock beats Rock. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 4 && randNum == 1) {
        cout << "Paper beats Spock. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else if (RPS == 4 && randNum == 2) {
        cout << "Spock beats Scissors. ";
        cout << "You win! :D" << endl;
        numWins = numWins + 1;
    }
    
    else if (RPS == 4 && randNum == 3) {
        cout << "Lizard beats Spock. ";
        cout << "You lose :(" << endl;
        numLost = numLost + 1;
    }
    
    else {
        cout << endl;
    }
    

    cout << "Do you want to play once more? (Y/N) ";
    cin >> yesNo;
    
} while ((yesNo == 'Y' || yesNo == 'y') && !(yesNo == 'N' || yesNo == 'n'));

    if (yesNo == 'N' || 'n') {
        cout << "You won " << numWins << " game(s), lost " << numLost <<
        " game(s), and tied " << numTies << " game(s)." << endl;
    }

    else {
        cout << "Error: must enter Y or N (Yes or No)" << endl;
    }
    
    cout << endl; 
    
    return 0; // signals the operating system that our program ended OK.
}
