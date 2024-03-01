/* CSCI261 Lab: Magic Class
 *
 * Description: Definition file for Magic Class
 *
 * Author: Taylor Kramer
 *
 */
 
#include "Magic.h"

using namespace std;

Magic::Magic() {
    finalChoice = 0;
}

string Magic::introduction() {
    cout << "\nWelcome to my humble abode, traveler." << endl;
    cout << "This is my workshop where I create my " << endl;
    cout << "many magical teas.\n" << endl;
    cout << "Oh dear! You must be very dehydrated!" << endl;
    cout << "You can choose from any of these teas that I have made:" << endl;
    cout << "Kukicha,\n"; //poisonous
    cout << "Genmaicha,\n"; //hydrating tea
    cout << "Oolong,\n"; //eternal glory
    cout << "Tieguanyin,\n"; //poisonous
    cout << "Lungching,\n"; //hydrating tea
    cout << "Darjeeling,\n"; //hydrating tea
    cout << "and Assam.\n\n"; //hydrating tea
    cout << "But watch out!" << endl;
    cout << "Some of them are poisonous, although I can't recall which ones." << endl;
    cout << "Some will simply hydrate you." << endl;
    cout << "And there is one that will offer you eternal glory.\n" << endl;
    cout << "Please, go ahead and choose one at your own risk. (type full name in all lowercase): ";
    cin >> myChoice;
    return myChoice;
}

void Magic::setInput(string myChoice) {
    choice = myChoice;
}


int Magic::MyChoice() {
    // call other function that asks for user input //
    if((choice == "kukicha") || (choice == "tieguanyin")) {
        return 0;
    }
    else if((choice == "genmaicha") || (choice == "lungching") || (choice == "darjeeling") || (choice == "assam")) {
        return 1;
    }
    else if (choice == "oolong") {
        return 2;
    }
    else {
        return 3;
    }
}

void Magic::FinalChoice(int c) {
    if (c == 0) {
        getKiller();
    }
    else if (c == 1) {
        getHydrator();
    }
    else if (c == 2) {
        getWinner();
    }
    else if (c == 3) {
        getwrongWord();
    }
}

void Magic::getKiller() {
    finalChoice = 0;
}

void Magic::getHydrator() {
    finalChoice = 1;
}

void Magic::getWinner() {
    finalChoice = 2;
}

void Magic::getwrongWord() {
    finalChoice = 3;
}

void Magic::detOutput() {
    if (finalChoice == 0) {
        ifKill();
    }
    else if (finalChoice == 1) {
        ifHydra();
    }
    else if (finalChoice == 2) {
        ifWin();
    }
    else if (finalChoice == 3) {
        ifwrongword();
    }
}

void Magic::ifKill() {
    cout << "R.I.P...You've been poisoned!" << endl;
}

void Magic::ifHydra() {
    cout << "Great! You look much more hydrated now. Choose another: ";
    cin >> choice;
    cout << endl;
}

void Magic::ifWin() {
    cout << "You have won eternal glory!" << endl;
}

void Magic::ifwrongword() {
    cout << "Something went wrong...try that again...";
    cin >> choice;
    cout << endl;
}


