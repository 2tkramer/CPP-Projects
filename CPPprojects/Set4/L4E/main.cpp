/* CSCI 261 Assignment 1: L4E
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For setw()

using namespace std;


int main() {
    
    const int NUM_ROWS = 2;
    const int NUM_COL = 3;
    int numVal[12];
    int numValTrans[12];
    int i;
    int j;
  
      
    cout << "Enter a 3X4 matrix: " << endl;
      
    for (i = 1; i <= NUM_ROWS; ++i) {
        for (j = 1; j <= NUM_COL; ++j) {
            cout << "Enter row " << i << " Column " << j << ": ";
            cin >> numVal[(((j - 1) * NUM_COL) + (i - 1))];
        }
    }

    cout << endl << "This is the matrix you entered: " << endl;
     
    for (i = 0; i < NUM_ROWS; ++i) {
        cout << "[";
        for (j = 0; j < NUM_COL; ++j) {
            cout << setw(5) << right << numVal[((j * NUM_COL) + i)];
        }
        cout << " ]" << endl;
    }
    

    cout << endl << "This is the transpose of the matrix you entered: " << endl;
    
    
    
    cout << "riiiiipppppppp..... no time :(" << cout ;
      
    
      
    return 0; // signals the operating system that our program ended OK.
}