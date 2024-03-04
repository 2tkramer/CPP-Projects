/* CSCI 261 Assignment 1: L3B (multiplication table)
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
    
    int first;
    int second;
    
    
    do {
        
        cin >> first;
    
    } while (!((1 < first) && (11 > first)));
    
    do {
        
        cin >> second;
    
    } while (!((1 < second) && (11 > second))); 
    
    // input
    
    
    int column;
    int row;
    
    column = first;
    row = second;    
    
    // turn input into usable variables
    
    
    int i;
    
    cout << "  ";
    
    for (i = 1; i <= row; ++i) {
        cout << setw(4) << right << i;  
    }
    
    // first line
    
    
    int numRows;
    int numColumns;
    
    for (numRows = 1; numRows <= column; ++numRows) {
        
        cout << endl;
        cout << setw(2) << right << numRows;
        
        for (numColumns = 1; numColumns <= row; ++numColumns) {
            cout << setw(4) << right << numRows * numColumns;     
        } 
    } 
    
    // multiplication table
    
    
    cout << endl;
        
        
    
    return 0; // signals the operating system that our program ended OK.
}