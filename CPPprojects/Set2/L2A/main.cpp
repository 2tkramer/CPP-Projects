/* CSCI 261 Assignment 1: Lab 2A
 *
 * Author: Taylor Kramer & Matthew Kouba (_INSERT_YOUR_NAME_HERE_)
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {
    
    double force;
    double area;
    double stress;
    double radius;
    double const VALUE_OF_PI = 3.14159;
    double volume;
    
    // Calculating Stress
    
    cout << endl;
    cout << "Calculating Stress." << endl; // Introduction
    
    cout << "Enter the force applied to the material: ";
    cin >> force;                          // States the input put in for force
    
    cout << "Enter the area over which the force is applied: ";
    cin >> area;                           // States the input put in for area
    
    stress = force / area;                 // Stress equals force over area force is applied
    
    cout << "The stress of the material with a force of " << force <<
    " over and area of " << area << " equals: " << stress << endl;       // Final statement
    
    cout << endl;
    cout << endl;                          // Spacing purposes
    
    // Calculating the Volume of a Sphere
    
    cout << "Calculating the Volume of a Sphere." << endl;               // Introduction
    cout << "Enter the radius: ";
    cin >> radius;                         // States the input put in for radius
    
    volume = VALUE_OF_PI * radius * radius * radius * 4.0 / 3.0;         // volume equals pi * radius cubed * 4.0/3.0
    
    cout << "The volume of the sphere is " << volume << " cubic units."; // Final statement
    
    return 0; // signals the operating system that our program ended OK.
}
