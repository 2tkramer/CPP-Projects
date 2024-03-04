/* CSCI 261 Assignment: L8A
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
#include "Date.h"


using namespace std;

int main () {
    
    Date DDate;
    string MyDate;
    string output;
    
    cout << "Please enter a date (month,day,year): ";
    cin >> MyDate;
    DDate.setDate(MyDate);
    DDate.getDate();
    
    if (DDate.valiDate() == 0) {
      cout << "Sorry, this is not a valid date.";
      return 0;
    }


    DDate.compare();
    
    cout << "This date occurs " << DDate.output() << " the day on which ." << endl;


  return 0;
}
