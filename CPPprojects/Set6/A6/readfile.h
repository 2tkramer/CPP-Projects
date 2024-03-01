#ifndef READFILE_H
#define READFILE_H
#include <iostream>
#include <string>
#include <fstream>
#include "countStruct.h"
#include "cleanWords.h"

using namespace std;

void readFile() {
    
    ifstream myFile("greeneggsandham.txt");
    ofstream words("singlewords.txt");
    WordCount wRead;
    wRead.word;
    char w;
    
    if (myFile.fail()) {
           cout << "Error: could not open file";
           exit(1);
    }

    while (!myFile.eof()) {
        
        string myWord = wRead.word;
        
        for (int i = 0; i < 4000; ++i) {
            w = myFile.get();
            
            if ((w !=' ') && (w !='\n')) {
                myWord = myWord + w;
            }
            else if ((w ==' ') || (w =='\n')) {
                // cleans words in file
                words << myWord << endl;
                myWord.clear();
                continue;
            }
           
        }
    }
    myFile.close();
}
   


#endif