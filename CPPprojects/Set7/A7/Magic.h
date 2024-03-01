/* CSCI261 Lab: Magic Class
 *
 * Description: Declaration file for Magic Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#pragma once

using namespace std;

class Magic {
    public:
        Magic();
        string introduction();
        void setInput(string choice);
        void FinalChoice(int c);
        void getKiller();
        void getHydrator();
        void getWinner();
        void getwrongWord();
        int MyChoice();
        void detOutput();
        int finalChoice;
        string choice;
        string myChoice;
    private:
        int c;
        void ifKill();
        void ifHydra();
        void ifWin();
        void ifwrongword();
};