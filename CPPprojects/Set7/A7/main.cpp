/* CSCI 261 Assignment: A7
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For fixed, setprecision, etc.
#include <cstdlib>  // For rand commmands
#include <ctime>    // For rand(time())
#include <cstdbool> // For boolean statements
#include <string>   // For strings
#include <cstring>  // For c strings and mod functions
#include <cmath>    // For sin, cos, etc.
#include <cctype>   // For char types
#include <vector>   // For vectors
#include "Magic.h"

using namespace std;

int main () {
    
    Magic myMagic;
    int theChoice;
    
    string firstChoice = myMagic.introduction();
    myMagic.setInput(firstChoice);
    
    do {
        theChoice = myMagic.MyChoice();
        myMagic.FinalChoice(theChoice);
        myMagic.detOutput(); 
    } while ((theChoice == 1) || (theChoice == 3));

   return 0;
}
