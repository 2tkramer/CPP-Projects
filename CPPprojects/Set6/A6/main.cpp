/* CSCI 261 Assignment: A6
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
#include <SFML/Graphics.hpp>
#include "myfunctions.h"
#include "countStruct.h"
#include "readfile.h"
#include "cleanWords.h"
#include "newVector.h"
using namespace std;

int main () {   
    
    // reads file and creates new txt. file with all words on their own line
    readFile();
    // cleans the words and puts them in a vector
    vector<string> fullVector = cleanWordsStringWords();
    // printsVector
    
    // for (int i = 0; i < fullVector.size(); ++i) {
    //     cout << fullVector[i] << endl;
    // }
    
    // make vector with words and counts
    vector<WordCount> BlahBlahBlah = newVector(fullVector);
    
    for (int i = 0; i < BlahBlahBlah.size(); ++i) {
        cout << BlahBlahBlah[i].count << BlahBlahBlah[i].word << endl;
    }
    
    
    // alphabetize AND print statements
    /*alpha();
    printWords();
*/

    // create a function that will create the SFML file that shows the bars which represent 
    // the information from green eggs and ham
    return 0;
}
