/* CSCI 261 Assignment: A5
 *
 * Author: Taylor Kramer
 */
 
#include <iostream>
#include <iomanip>  // For fixed, setprecision, etc.
#include <cstdbool> // For boolean statements
#include <string>   // For strings
#include <cstring>  // For c strings and mod functions
#include <cmath>    // For sin, cos, etc.
#include <cctype>   // For char types
#include <vector>   // For vectors

#include "cardStruct.h"
#include "printcard.cpp"
#include "vectordeck.h"
using namespace std;


int main() {
    
    // makes deck of cards // 
    makeDeck(deck);
    // shuffles deck //
    shuffleDeck(deck);
    
    // print out deck //
    // for (int i = 0; i < deck.size(); ++i) {
    //     printcard(deck.at(i));
    // }
    // cout << deck.size() << endl;
    
    // two decks // 
    vector<card> playerCards;
    vector<card> compCards;
    
    playerDeck(deck, playerCards);
    computerDeck(deck, compCards);
    
    // print test //
    // for (int i = 0; i < playerCards.size(); ++i) {
    //     printcard(playerCards.at(i));
    // }
    
    
    // string playAgain;
    // // play //
    // do {
    // // get top two cards //
    cout << "Computer reveals: ";
    printcard(compCards.at(0));
    cout << "Player reveals: ";
    printcard(playerCards.at(0));

    // // determine if computer or player wins // 
    string result = whoWins(compCards.at(0), playerCards.at(0));
    
    // if computer wins //
    if (result == "comp") {
        cout << "computer wins" << endl;
    }
    // if player wins //
    if (result == "player") {
        cout << "player wins" << endl;
    }
    //if equal //
    if (result == "equal") {
        cout << "tie!" << endl;
    }
    
    // cout << "Do you want to 'Play Again' or 'Quite'?" << playAgain << endl;
    // } while (playAgain == "Play Again" );
    
       
    return 0; // signals the operating system that our program ended OK.
}