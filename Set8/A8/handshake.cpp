// Austin Rich, Section B
// Functions for Magic Item, A7

#include "handshake.h"
#include <iostream>
#include <string>
// Include everything you need
using namespace std;
// All elements that will go into MagicHand
MagicHand::MagicHand() {
    // The correct hand the user will guess
    hand = "Right";
    // The prize the user will win
    prize = "A Solid Handshake!!!";
    //introduction();
    //thankYou();
}

// Introduction Function
void MagicHand::introduction() {
    cout << "Welcome to the Magic Hand Game!" << endl;
    cout << "All you have to do is guess which hand I am holding your prize in to win!" << endl;
    cout << "Choose a Hand: Right or Left ?" << endl;
    return;
}

// Function to thank player for playing
void MagicHand::thankYou() {
    cout << "Thank you for playing my game!" << endl;
    return;
}

// Getter function for prize
string MagicHand::getPrize() {
    return prize;
}

// Getter for Correct Hand
string MagicHand::getHand() {
    return hand;
}

// Function to determine a match
bool MagicHand::isCorrect(string s, string a) {
    if (s == a){
        cout << "Congratulations, You guessed the correct hand!" << endl;
        return true;
    } else {
        cout << "Sorry, your guess was wrong..." << endl;
        return false;
    }
}