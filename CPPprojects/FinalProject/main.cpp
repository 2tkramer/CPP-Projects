/* CSCI 261 Assignment: 
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
#include <fstream>
#include "cereal.cpp"
#include "cereal.h"
#include "cstruct.h"


using namespace std;

int main () {   
    
    Cereal soul;
    
    soul.introduction();
    soul.dataArray();
    soul.ques1();
    soul.ques2();
    soul.ques3();
    soul.ques4();
    soul.ques5();
    soul.ques6();
    soul.ques7();
    soul.ques8();
    soul.ques9();
    soul.printResults();


   return 0;
}
