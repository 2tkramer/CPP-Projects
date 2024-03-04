#ifndef NEWVECTOR_H
#define NEWVECTOR_H
#include <string>
#include <iostream> // For cin, cout, etc.
#include <cstring>
#include <cstdbool> // For boolean statements
#include "countStruct.h"
#include "readfile.h"

using namespace std;

vector<WordCount> newVector(vector<string> oldvector) {
    vector<WordCount> newvector;
    WordCount w;
    w.word = oldvector[0];
    w.count = 1;
    newvector.push_back(w);
    for (int i = 0; i < oldvector.size(); ++i) {
        for (int j = 0; j < newvector.size(); ++j) {
            if (oldvector[i] != newvector.at(j).word) {
                WordCount tempVal;
                tempVal.word = oldvector[i];
                tempVal.count = 1;
                newvector.push_back(tempVal);
                break;
            }
            else {
                newvector[j].count = newvector[j].count + 1;
            }
        }
    }
    return newvector;
}
#endif