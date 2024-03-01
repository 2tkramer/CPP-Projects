/* CSCI 261 Assignment 1: A2 (Random Triangles)
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
#include <cmath>    // For cos, sin, fabs, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    
    double first;  // Input for first number
    double second; // Input for second number
    double third;  // Input for third number
    double small;  // Smallest input length
    double medium; // Medium input length
    double large;  // Largest input length
    double semiParimeter; // Semiperimeter
    double area; // Area
    int largerNum;
    

    const double TOLERANCE = 0.0001;
    

    cout << endl;
    
    cout << "Let's make a triangle!" << endl;
    cout << endl;
    
    cout << "Start by deciding the length for the first side: ";
    cin >> first; // input first value
    
    cout << "Great! Now enter the length of the second side: ";
    cin >> second; // input second value
    
    cout << "The length of the third side given by our random " << endl;
    cout << "number generator: ";
    
    srand(time(0));
    
    if (first > second) {
        
        largerNum = first * 1000;
        third = rand() % largerNum;
        third = third / 1000;
    }
        
    else if (second > first) {
        
        largerNum = second * 1000;
        third = rand() % largerNum;
        third = third / 1000;
    }
    
    else if (second == first) {
        
        largerNum = first * 1000;
        third = rand() % largerNum;
        third = third / 1000;
    }
    
    cout << third;
    
    
    // get third value using random number generator
    
    
    cout << endl;
    cout << endl;
    

    
if  (((first > 0) && (second > 0) && (third > 0)) &&                                            // All values must be greater than zero
    ((first < (second + third)) && (second < (first + third)) && (third < (first + second)))) { // each side needs to be less than the sum of the others
    
    if (first > second && second > third) {        // first > second > third
    
        large = first;
        medium = second;
        small = third;
    }
    
    else if (first > third && third > second) {    // first > third > second
    
        large = first;
        small = second;
        medium = third;
    }
    
    else if (second > first && first > third) {    // second > first > third
    
        medium = first;
        large = second;
        small = third;
    }
    
    else if (second > third && third > first) {    // second > third > first
    
        small = first;
        large = second;
        medium = third;
    }
    
    else if (third > first && first > second) {    // third > first > second
    
        medium = first;
        small = second;
        large = third;
    }
    
    else if (third > second && second > first) {   // third > second > first
    
        small = first;
        medium = second;
        large = third;
    }
    
    else if ((third == second) < first) {         // third & second are <= first
        
        small = third;
        medium = second;
        large = first;
    }
    
    else if ((second == first) < third) {         // first & second are <= third
        
        small = second;
        medium = first;
        large = third;
    }
    
    else if ((first == third) < second) {         // third & first are <= second
        
        small = first;
        medium = third;
        large = second;
    }
    
    else if (first == third == second) {         // third & second & first are equal
        
        small = first;
        medium = second;
        large = third;
    }
}
    
    else {
        cout << "Error." << endl;
        cout << "1. You might have entered a negative number" << endl;
        cout << "2. The numbers you entered do not make a triangle" << endl;
        cout << "   because they do not meet the condition that every" << endl;
        cout << "   side must be smaller in length then the sum of the other two." << endl; // incase the above contitions are not met
        return 0;
    }
    
    
    // if conditions are met

    
    if (((small*small) + (medium*medium) == (large*large)) && (fabs((small*small) + (medium*medium) - (large*large)) <= TOLERANCE)) {
        
        cout << "You made a right triangle!" << endl;
        // right triangle
    }
    
    else if ((large*large) < (small*small) + (medium*medium)) {
        
        cout << "You made an acute triangle!" << endl;
        // acute triangle
    }
    
    else if ((large*large) > (small*small) + (medium*medium)) {
        
        cout << "You made an obtuse triangle!" << endl;
        // obtuse triangle 
    }
    
    else {
        
        cout << "Error" << endl; // in the case that non of the above conditions are met
    }
    
    cout << endl;
    
    semiParimeter = (small + medium + large) / 2;                                                        // semiParimeter
    area = sqrt(semiParimeter*(semiParimeter - small)*(semiParimeter - medium)*(semiParimeter - large)); // area
    
    cout << "Now here is some other random information on your triangle:" << endl; // more info
    cout << endl;                                                                  // spacing
    cout << "                  The perimeter: " << semiParimeter * 2 << endl;      // perimeter
    cout << "                  The Area     : " << area << endl;                   // area

    
    return 0; // signals the operating system that our program ended OK.
}