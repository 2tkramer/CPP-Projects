/* CSCI 261 Assignment: L7B
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
#include "Triangle.h"

using namespace std;

int main () { 
    
    Triangle myTriangle;
    
    myTriangle.setSide1(5);
    myTriangle.setSide2(12);
    myTriangle.setSide3(13);
    
    cout << "The length of side 1: " << myTriangle.getSide1() << endl;
    cout << "The length of side 2: " << myTriangle.getSide2() << endl;
    cout << "The length of side 3: " << myTriangle.getSide3() << endl;
    
    if (myTriangle.testTri() == false) {
        cout << "Error." << endl;
        cout << "1. You might have entered a negative number" << endl;
        cout << "2. The numbers you entered do not make a triangle" << endl;
        cout << "   because they do not meet the condition that every" << endl;
        cout << "   side must be smaller in length then the sum of the other two." << endl;
        return 0;
    }
    
    cout << "This is the perimeter of your triangle: ";
    cout << myTriangle.Addsides() << endl;
    cout << "This is the area of your triangle: ";
    cout << myTriangle.Area() << endl;
    

   return 0;
}
