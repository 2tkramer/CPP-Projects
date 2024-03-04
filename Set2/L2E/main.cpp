/* CSCI 261 Assignment 1: Lab 2E (Rock Paper Scissors)
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
    char L;
    char l;
    char K;
    char k;
    int randNum;
 
    srand(time(0));              // Random - seed: time
    
    randNum = (rand() % 5);
    
    cout << "Welcome one and all to a round of Rock, Paper, Scissors, Lizard, Spock! (Enter P, R, S, L, or K for Spock)" << endl;
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
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
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
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
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
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
        }
    }
    
    else if (RPS == 'p') {
        cout << "Player choose Paper" << endl;   // Lowercase p if statement
        cout << "Computer choose ";           // Final Statement
        
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
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
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
            cout << "Scissors" << endl;        
        }
        else if (randNum == 3) {
            cout << "Lizard" << endl;
        }
        else if (randNum == 4) {
            cout << "Spock" << endl;           // Computer output
        }
    }
    
    else if (RPS == 'L') {
        cout << "Player choose Lizzard" << endl; // Uppercase L if statement
        cout << "Computer choose ";           // Final Statement
        
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
    }
        
    else if (RPS == 'l') {
        cout << "Player choose Lizzard" << endl; // Lowercase l if statement
        cout << "Computer choose ";           // Final Statement
        
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
    }
        
    else if (RPS == 'K') {
        cout << "Player choose Spock" << endl; // Uppercase K if statement
        cout << "Computer choose ";           // Final Statement
        
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
    }
    
    else if (RPS == 'k') {
        cout << "Player choose Spock" << endl; // Lowercase k if statement
        cout << "Computer choose ";           // Final Statement
        
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
    }
    
    else {
        cout << "Oops! Please Enter either R, P, S, L or K to play.";      // Computer output
    }
    

    cout << endl;
    cout << endl;
    

    switch (RPS) {
        case 'R':
         
        case 'r':
          RPS = 0; 
          break;

        case 'P':
      
        case 'p':
          RPS = 1;
          break;
      
        case 'S':
          
        case 's':
          RPS = 2;
          break;
          
        case 'L':
          RPS = 3;
          break;
          
        case 'l':
          RPS = 3;
          break;
          
        case 'K':
          RPS = 4;
          break;
          
        case 'k':
          RPS = 4;
          break;


        default:
          cout << "It's okay." << endl;
          break;
    }

    
    if (RPS == randNum) {
            cout << "It's a tie!" << endl;
    }
    
    else if (RPS == 1 && randNum == 0) {
            cout << "Paper beats Rock. ";
            cout << "You win! :D" << endl;
    }    
    
    else if (RPS == 1 && randNum == 2) {
        cout << "Scissors beats Paper. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 1 && randNum == 4) {
            cout << "Paper beats Spock. ";
            cout << "You win! :D" << endl;
    }
    
    else if (RPS == 1 && randNum == 3) {
        cout << "Lizard beats Paper. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 0 && randNum == 2) {
        cout << "Rock beats Scissors. ";
        cout << "You win! :D" << endl;
    }
    
    else if (RPS == 0 && randNum == 1) {
        cout << "Paper beats Rock. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 0 && randNum == 3) {
        cout << "Rock beats Lizard. ";
        cout << "You win! :D" << endl;
    }
    
    else if (RPS == 0 && randNum == 4) {
        cout << "Spock beats Rock. ";
        cout << "You lose :(" << endl;
    }
        
    else if (RPS == 2 && randNum == 1) {
        cout << "Scissors beats Paper. ";
        cout << "You win! :D" << endl;
    }

    else if (RPS == 2 && randNum == 0) {
        cout << "Rock beats Scissors. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 2 && randNum == 3) {
        cout << "Scissors beats Lizard. ";
        cout << "You win! :D" << endl;
    }
    
    else if (RPS == 2 && randNum == 4) {
        cout << "Spock beats Scissors. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 3 && randNum == 1) {
            cout << "Lizard beats Paper. ";
            cout << "You win! :D" << endl;
    }
    
    else if (RPS == 3 && randNum == 0) {
        cout << "Rock beats Lizard. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 3 && randNum == 4) {
            cout << "Lizard beats Spock. ";
            cout << "You win! :D" << endl;
    }
    
    else if (RPS == 3 && randNum == 3) {
        cout << "Scissors beats Lizard. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 4 && randNum == 0) {
            cout << "Spock beats Rock. ";
            cout << "You win! :D" << endl;
    }
    
    else if (RPS == 4 && randNum == 1) {
        cout << "Paper beats Spock. ";
        cout << "You lose :(" << endl;
    }
    
    else if (RPS == 4 && randNum == 2) {
            cout << "Spock beats Scissors. ";
            cout << "You win! :D" << endl;
    }
    
    else if (RPS == 4 && randNum == 3) {
        cout << "Lizard beats Spock. ";
        cout << "You lose :(" << endl;
    }
    
    else {
        cout << "Everyone makes mistakes." << endl;
    }
    
    
    cout << endl; 
    
    
    return 0; // signals the operating system that our program ended OK.
}
