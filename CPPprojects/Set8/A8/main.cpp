/* CSCI 261 Assignment: A8
 *
 * Author: Taylor Kramer, section b
 */

#include <iostream> // For cin, cout, etc.
#include <iomanip>  // For fixed, setprecision, etc.
#include <cstdlib>  // For rand commmands
#include <ctime>    // For rand(time())
#include <cstdbool> // For boolean statements
#include <string>   // For strings
#include <cstring>  // For c strings and mod functions
#include <cmath>    // For sin, cos, etc.
#include <cctype>   // For char types
#include <vector>   // For vectors
#include "Magic.h"
#include "handshake.h"
#include "infinity.h"
#include "math.h"
// #include "options.h"
// #include "options.cpp"

using namespace std;

    ///////functions corresponding with each choice///////////////

void choicehand(MagicHand hand) {
    string inputHand;
    
    hand.introduction();
    cin >> inputHand;
    
    if (hand.isCorrect(inputHand, hand.getHand()) == true) {
        hand.getPrize();
    }
    
    hand.thankYou();
    
}

void choiceinfinity(gauntlet infinity) {
    infinity.introduction();
    infinity.riddleForSpaceStone();
    infinity.riddleForRealityStone();
    infinity.riddleForPowerStone();
    infinity.riddleForMindStone();
    infinity.riddleForTimeStone();
    infinity.riddleForSoulStone();
    infinity.stoneCheck();
    cout << "\n\n";
}

void choicemath(magicItem math) {
    int answer;
    cout << math.introduction();
    cout << "\n";
    cout << math.getMathProblem();
    cin >> answer;
    math.setAnswer(answer);
    if (math.checkAnswer() == 1) {
        cout << math.getPrize();
    }
    else {
        cout << "Sorry mate... I guess today is just not the day.";
    }
}

void choicemyMagic(Magic myMagic) {
    int theChoice;
    
    string firstChoice = myMagic.introduction();
    myMagic.setInput(firstChoice);
    
    do {
        theChoice = myMagic.MyChoice();
        myMagic.FinalChoice(theChoice);
        myMagic.detOutput(); 
    } while ((theChoice == 1) || (theChoice == 3));
}

int main () {
    
    char mainchoice;
    MagicHand hand;
    gauntlet infinity;
    magicItem math;
    Magic myMagic;

    cout << "\n\nWelcome to the magic shop.\n";
    cout << "This is what we have on tap for today:\n\n";
    cout << " a. the wonderous handshake\n";
    cout << " b. control over the universe\n";
    cout << " c. respect\n";
    cout << " d. eternal glory\n\n";
    cout << "Keep in mind, however, that magic is all about giving a\n";
    cout << "little before taking a little. There will be different, potentially deadly, tasks\n";
    cout << "you have to face before receiveing your price.\n\n";
    cout << "Chose which item you wish to recieve(type a, b, c or d) or\n";
    cout << "type e to do each task in sequence and possibly recieve all the items.\n\n";
    cout << "chose now: ";
    cin >> mainchoice;
    cout << "\n\n";
    
    //which class to put into action
    
    do {
    
        if (mainchoice == 'a') {
            choicehand(hand);
        }
        else if (mainchoice == 'b') {
            choiceinfinity(infinity);
        }
        else if (mainchoice == 'c') {
            choicemath(math);
        }
        else if (mainchoice == 'd') {
            choicemyMagic(myMagic);
        }
        else if (mainchoice == 'e') {
            choicehand(hand);
            choiceinfinity(infinity);
            choicemath(math);
            choicemyMagic(myMagic);
        }
        else {
            cout << "Whoops, that is not an option. Try again: ";
            cin >> mainchoice;
        }
    
    } while ((mainchoice != 'a') && (mainchoice != 'b') && (mainchoice != 'c') &&
             (mainchoice != 'd') && (mainchoice != 'e'));
            
    
    return 0;
}