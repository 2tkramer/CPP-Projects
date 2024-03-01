/* CSCI 261 Assignment: L6A 
 *
 * Author: Taylor Kramer
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() { 

        ifstream Message("secretMessage.txt");
        ofstream deci("decipheredMessage.txt");
        char curr;
        
        // check for an error
        if (Message.fail()) {
           cout << "Error: could not open file";
           exit(1);
        }

        while (!Message.eof()) {
            while (Message.get(curr)) {
                char const c = '~';
                char const n = '\n';
                char const s = ' ';
                
                switch (curr) {
                case c:
                deci << s;
                break;
                
                case n:
                deci << n;
                break;
                
                default:
                deci << char(curr + 1);
                break;
                }
            }
        }    
            

        Message.close(); // close the file

        return 0; 
} 


