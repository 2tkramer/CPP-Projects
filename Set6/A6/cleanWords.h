#ifndef CLEANWORDS_H
#define CLEANWORDS_H
#include <string>
#include <iostream> // For cin, cout, etc.
#include <cstring>
#include <cstdbool> // For boolean statements
#include "countStruct.h"
#include "readfile.h"

using namespace std;

vector<string> cleanWordsStringWords() {
    
    WordCount cleanWord;
    cleanWord.word;
    
    ifstream words("singlewords.txt");
    vector<string> cleanWords;
    
    if (words.fail()) {
           cout << "Error: could not open file";
           exit(1);
    }

    while (!words.eof()) {
        
        string dirtyWord;
    
        for (int i = 0; i < 830; ++i) {
            
            while (words >> dirtyWord) {
                
                for (int i = 0; i < dirtyWord.size(); ++i) {
                    
                    if (dirtyWord.at(i) == '.') {
                        dirtyWord.erase(i);
                    }
                    else if (dirtyWord.at(i) == '?') {
                        dirtyWord.erase(i);
                    }
                    else if (dirtyWord.at(i) == '!') {
                        dirtyWord.erase(i);
                    }
                    else if (dirtyWord.at(i) == ',') {
                        dirtyWord.erase(i);
                    }
                    else if (dirtyWord.at(i) == '\n') {
                        dirtyWord.erase(i);
                    }
                }
            cleanWord.word = dirtyWord;
            // cout << cleanWord.word << endl;
            cleanWords.push_back(cleanWord.word);
            }
        }
    }
    words.close();
    return cleanWords;
}

#endif