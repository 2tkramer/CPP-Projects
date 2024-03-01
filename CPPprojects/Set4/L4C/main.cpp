/* CSCI 261 Assignment 1: L4C
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.

using namespace std;


int main() {
    
      const int NUM_VALS = 15;
      int numVals[15];
      int i;
      
      for (i = 1; i <= NUM_VALS; ++i) {
          cout << "Enter value #" << i << ": ";
          cin >> numVals[i - 1];
      }
      
     cout << endl;
     cout << "Great work!" << endl;
     
     cout << "The numbers you entered were: ";
     
     for (i = 0; i < NUM_VALS; ++i) {
         cout << numVals[i] << " ";
     }
    
    cout << endl;
    cout << "K Bye :)" << endl;
    
    return 0; // signals the operating system that our program ended OK.
}