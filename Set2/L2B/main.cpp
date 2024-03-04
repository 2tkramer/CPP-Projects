/* CSCI 261 Assignment 1: Lab 2B (Pretty output)
 *
 * Author: Taylor Kramer & Matthew Kouba (_INSERT_YOUR_NAME_HERE_)
 *
 * More complete description here...
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For fixed, setprecision, etc.

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
    
    cout << endl;                          // Spacing purposes
    
    // Calculating Stress
    
    cout << "Enter the force applied to the material: ";
    cin >> force;                          // States the input put in for force
    
    cout << "Enter the area over which the force is applied: ";
    cin >> area;                           // States the input put in for area
    
    cout << endl;                          // Spacing purposes
    
    // Calculating Volume of a Sphere
    
    cout << "Enter the radius: ";
    cin >> radius;                         // States the input put in for radius
    
    stress = force / area;                                               // Stress equals force over area force is applied
    volume = VALUE_OF_PI * radius * radius * radius * 4.0 / 3.0;         // volume equals pi * radius cubed * 4.0/3.0
    
    cout << endl;                          // Spacing purposes
    
    cout << left << "Equation #09" << setw(17) << setfill('.') << right << "Stress ";
    cout << setw(25) << setfill(' ') << left << "(Mechanical Engineering)" << right << ":";
    cout << setprecision(3) << fixed << setw(15) << right << setfill(' ') << stress << endl;       // Final statement Stress
    
    cout << left << "Equation #06" << setw(17) << setfill('.') << right << "Volume Sphere ";
    cout << setw(25) << setfill(' ') << left << "(Math)" << right << ":";
    cout << setprecision(3) << fixed << setw(15) << right << setfill(' ') << volume << endl;       // Final statement Volume
    
    
    return 0; // signals the operating system that our program ended OK.
}