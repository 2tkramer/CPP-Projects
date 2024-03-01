#include "cardStruct.h"
#include "vectordeck.h"
#ifndef PRINTCARD_H
#define PRINTCARD_H
#include <string>
using namespace std;

void printcard(card cardInfo) {
    if(cardInfo.rank == 0) {
        cout << "Ace of " << cardInfo.suit << endl;
    }
    else if(cardInfo.rank > 1 && cardInfo.rank < 11) {
        cout << cardInfo.rank << " of " << cardInfo.suit << endl;
    }
    else if (cardInfo.rank == 11) {
        cout << "Jack of " << cardInfo.suit << endl;
    }
    else if (cardInfo.rank == 12) {
        cout << "Queen of " << cardInfo.suit << endl;
    }
    else if (cardInfo.rank == 13) {
        cout << "King of " << cardInfo.suit << endl;
    }

}

#endif
