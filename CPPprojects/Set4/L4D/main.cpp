/* CSCI 261 Assignment 1: L4D
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
    
    int maxVal = numVals[0];
    int minVal = numVals[0];
    
    for (i = 0; i < NUM_VALS; ++i) {
        if (numVals[i] > maxVal) {
            maxVal = numVals[i];
        }
    }
    for (i = 0; i < NUM_VALS; ++i) {
        if (numVals[i] < minVal) {
            minVal = numVals[i];
        }
    }
    
    cout << "The largest number is: " << maxVal << endl;
    cout << "The smallest number is: " << minVal << endl;
    
    cout << "Lolz! Now actually bye..." << endl;
    return 0; // signals the operating system that our program ended OK.
}