/* CSCI 261 Assignment 7
 *
 * Author: Matthew Kouba, section b
 *
 * There will be trivia based on the Avengers!
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cmath>
#include <string>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.
#include "infinity.h"

// default constructor that sets all infinity stones in gauntlet to false
gauntlet::gauntlet() {
    stone1 = false;
    stone2 = false;
    stone3 = false;
    stone4 = false;
    stone5 = false;
    stone6 = false;
}

void gauntlet::introduction() {
    cout << endl;
    cout << "Hello and welcome to the Marvel Cinematic Universe!" << endl;
    cout << "Your name is THANOS and you are trying to get ahold of all six Infinity Stones." << endl;
    cout << "If you can answer the following six riddles, you will be able to control the UNIVERSE" << endl;
}

void gauntlet::riddleForSpaceStone() {
    int year;
    
    cout << endl;
    cout << "***********************" << endl;
    cout << "FINDING THE SPACE STONE" << endl;
    cout << "***********************" << endl;
    cout << "What year was the first Marvel Cinematic Universe movie (Iron Man) released?" << endl;
    
    do {
            cout << "Year (XXXX Format): ";
        cin >> year;
        cout << endl;
        
        if (year == 2008) {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the SPACE Stone!" << endl;
            stone1 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (year != 2008);
}

void gauntlet::riddleForRealityStone() {
    string name;
    
    cout << endl;
    cout << "*************************" << endl;
    cout << "FINDING THE REALITY STONE" << endl;
    cout << "*************************" << endl;
    cout << "What is the name of Thor's brother?" << endl;
    cout << "Hint: He was the main villain in The Avengers." << endl;
    
    do {
        cout << "Thor's brother is named: ";
        cin >> name;
        cout << endl;
        
        if (name == "Loki" || name == "loki") {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the REALITY Stone!" << endl;
            stone2 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (name != "Loki" || name != "loki");
}

void gauntlet::riddleForPowerStone() {
    string tree;
    
    cout << endl;
    cout << "***********************" << endl;
    cout << "FINDING THE POWER STONE" << endl;
    cout << "***********************" << endl;
    cout << "Complete the phrase..." << endl;
    
    do {
        cout << "I am ";
        cin >> tree;
        cout << endl;
        
        if (tree == "groot" || tree == "Groot") {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the POWER Stone!" << endl;
            stone3 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (tree != "groot" || tree != "Groot");
}

void gauntlet::riddleForMindStone() {
    string android;
    
    cout << endl;
    cout << "**********************" << endl;
    cout << "FINDING THE MIND STONE" << endl;
    cout << "**********************" << endl;
    cout << "My body was created by Ultron." << endl;
    cout << "My mind was uploaded by Tony Stark." << endl;
    cout << "I was originally the programming for an AI named J.A.R.V.I.S." << endl;
    cout << "Who am I?" << endl;
    
    do {
        cout << "Name: ";
        cin >> android;
        cout << endl;
        
        if (android == "Vision" || android == "vision") {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the MIND Stone!" << endl;
            stone4 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (android != "Vision" || android != "vision");
}

void gauntlet::riddleForTimeStone() {
    int movie;
    
    cout << endl;
    cout << "**********************" << endl;
    cout << "FINDING THE TIME STONE" << endl;
    cout << "**********************" << endl;
    cout << "Complete the statement with a number." << endl;
    cout << "Avengers: Infinity War is the __th movie in the Marvel Cinematic Universe." << endl;
    
    do {
        cout << "Movie Number: ";
        cin >> movie;
        cout << endl;
        
        if (movie == 19) {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the TIME Stone!" << endl;
            stone5 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (movie != 19);
}

void gauntlet::riddleForSoulStone() {
    string ship;
    
    cout << endl;
    cout << "**********************" << endl;
    cout << "FINDING THE SOUL STONE" << endl;
    cout << "**********************" << endl;
    cout << "Alright, THANOS, there is only one INFINITY STONE left!!" << endl;
    cout << "What is the name of the flying ship from The Avengers?" << endl;
    cout << "Hint: What is the mash-up between a HELIcopter and an aircraft CARRIER?" << endl;
    
    do {
        cout << "Name: ";
        cin >> ship;
        cout << endl;
        
        if (ship == "helicarrier" || ship == "Helicarrier") {
            cout << "Congratulations THANOS!!" << endl;
            cout << "You have collected the SOUL Stone!" << endl;
            stone6 = true;
            break;
        }
        else {
            cout << "Oops!! Try again!!" << endl;
            continue;
        }
    } while (ship != "helicarrier" || ship != "Helicarrier");
}

void gauntlet::stoneCheck() {
    if ((stone1 = true) && (stone2 = true) && (stone3 = true) && (stone4 = true) && (stone5 = true) && (stone6 = true)) {
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "**************************************************************************" << endl;
        cout << "Congratulations THANOS!! You have collected all of the INFINITY STONES" << endl;
        cout << "You can now wipe out half of the universe with the snap of your fingers..." << endl;
        cout << "Wait, what's that??" << endl;
        cout << endl;
        cout << "THE AVENGERS are here to stop you!! Good luck!!" << endl;
        cout << "Thank you for playing!!" << endl;
    }
}
