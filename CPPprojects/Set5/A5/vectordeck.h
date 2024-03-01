#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "cardStruct.h"
#ifndef VECTORDECK_H
#define VECTORDECK_H

using namespace std;


vector<card> deck;

void makeDeck(vector<card>& deck) {
    vector<string> suits;
    suits.push_back("Hearts");
    suits.push_back("Diamonds");
    suits.push_back("Clubs");
    suits.push_back("Spades");
    for(int i = 0; i < suits.size(); ++i) {
        for(int j = 0; j < 14; ++j) {
            card c;
            c.suit = suits.at(i);
            c.rank = j;
            deck.push_back(c);
        }
    }
    return;
}

void shuffleDeck(vector<card>& deck) {
    srand(time(0));
    int i;
    int j;
    for (int k = 0; k < 40; ++k) {
        
        i = rand() % deck.size();
        j = rand() % deck.size();
        
        card tempVal;
        
        tempVal = deck.at(i);
        deck.at(i) = deck.at(j);
        deck.at(j) = tempVal;
    }
}

// void topCards(vector<card>& deck) {
//     cout << "Computer reveals: " << deck.at(0) << endl;
//     cout << "Players reveals: " << deck.at(1) << endl;
// }


void playerDeck(vector<card>& deck, vector<card>& playerCards) {
    for (int i = 0; i < 28; ++i) {
        playerCards.push_back(deck.at(i));
    }
}
void computerDeck(vector<card>& deck, vector<card>& compCards) {
    for (int i = 28; i < 56; ++i) {
        compCards.push_back(deck.at(i));
    }
}

string whoWins(card computer, card player) {
    if(computer.rank > player.rank) {
        return "comp";
    } 
    else if(player.rank > computer.rank) {
        return "player";
    }
    else if(player.rank == computer.rank) {
        int equal = 1000;
        return "equal";
    }
}


#endif