/* CSCI 261 Assignment: L5B
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.
#include <vector>   // For vectors


using namespace std;


int main() {

    int numIndex;
    vector<int> mainVec;
    
    cout << "This is my first vector mojo :)" << endl << endl;
    cout << "Type as many numbers as you want. As long as they" << endl;
    cout << "aren't negative you can just keep entering them." << endl << endl;
    cout << "Enter -1 to stop entering more numbers." << endl << endl;
    
    do {
        
        cout << "Your Number is: ";
        cin >> numIndex;
        // cout << numIndex << endl;
        mainVec.push_back(numIndex);

    } while (numIndex > -1);
    
    if (numIndex < -1) {
            cout << "Error: enter non-nagative numbers" << endl;
            cout << "Enter -1 to stop entering numbers." << endl;
            return 0;
        }
    else if (numIndex == -1) {
    }
    
    cout << endl;
    cout << "Great! You typed in: " << mainVec.size() << " numbers." << endl;
    cout << "Here are your numbers: ";
    for (int i = 0; i < mainVec.size() - 1; ++i) {
        cout << mainVec.at(i) << " ";
    }
    cout << endl;
    cout << endl << "Awesome!" << endl;
    cout << endl;
    int minVal = mainVec.at(0);
    for (int i = 0; i < mainVec.size() - 1; ++i) {
        if (mainVec.at(i) < minVal) {
            minVal = mainVec.at(i);
        }
    }
    cout << "The minimum value is: " << minVal;
    cout << endl;
    
    int maxVal = mainVec.at(0);
    for (int i = 0; i < mainVec.size() - 1; ++i) {
        if (mainVec.at(i) > maxVal) {
            maxVal = mainVec.at(i);
        }
    }
    cout << "The maximum value is: " << maxVal;
    cout << endl;
    
    cout << "The first value is: " << mainVec.at(0) << endl;
    cout << "The last value is: " << mainVec.at(mainVec.size() - 2) << endl;
    cout << "Cool, huh?" << endl;
// Your Number Is: 8
// Your Number Is: 6
// Your Number Is: 7
// Your Number Is: 9
// Your Number Is: 3
// Your Number Is: 2
// Your Number Is: 4
// Your Number Is: -1
// So awesome! You entered 7 numbers.
// The numbers are: 8 6 7 9 3 2 4
// Have a nice day!
// The smallest number is: 2
// The largest number is: 9
// The first number is: 8
// The last number is: 4
// Gaze at my awesome.       
    
    
    
    return 0; // signals the operating system that our program ended OK.
}