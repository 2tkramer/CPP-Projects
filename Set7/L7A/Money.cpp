/* CSCI261 Lab: Money Class
 *
 * Description: Definition file for Money Class
 *
 * Author: Taylor Kramer
 *
 */
 
 
#include "Money.h"

Money::Money() {
    dollars = 999;
    cents = 99;
}

Money::Money(int inputDollars, int inputCents) {
    dollars = inputDollars;
    cents = inputCents;
}