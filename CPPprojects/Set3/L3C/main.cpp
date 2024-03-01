/* CSCI 261: Fix Loop Errors (L3C)
 *
 * Author: Taylor Kramer
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2017 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

 */

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = i needs to include 5 so the ">" was turned into ">="
// TESTS: 1 + 2 + 3 + 4 + 5 = 15; output of 15 desired

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    short sum;  // Accumulates the total
    short i;    // Used as loop control variable
    
    for (i = 1; i <= 5; ++i) {
         sum += i;
     }
     
    cout << "The sum of the numbers from 1 to 5 (inclusive) is: " << sum << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = take total = 0 out of loop, make num_items an int var, 
// TESTS: test all integers for the num_items, and then all real numbers for the prices
//        if num_items if a number equal or less than zero, then total = 0

    cout << endl;
	cout << "******************" << endl;
	cout << "Section II" << endl;
	cout << "******************" << endl;

    double total = 0;     // Accumulates total
    double price;    // Gets next price from user
    short num_items;     // Number of items
    short counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> num_items;
    cout << endl;

    while (counter <= num_items) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        cout << endl;
        total += price;
        counter++;
    }
    
    cout << "The total price is: " << total << endl;
    
// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = instead of "sum so far: " sum, we need it to be "sum so far: " total. Then 
//       add in a ++counter after that output.
// TESTS: make sure the resulting total = 10.

    cout << endl;
	cout << "******************" << endl;
	cout << "Section III" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of numbers from 1 to 4 (inclusive)" << endl;

    sum = 4;
    counter = 1;
    total = 0;

    do {
        total += counter;
        cout << "Sum so far: " << total << endl;
        ++counter;
    } while (counter <= sum);

    cout << endl << "Section III Recap" << endl;

    cout << "I calculated the sum of numbers from 1 to 4 (inclusive) as " << total << endl;


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = change (i=4; i>0; i++) to (i=0; i<=4; i++)
// TESTS: make sure the resulting total = 30

    cout << endl;
	cout << "******************" << endl;
	cout << "Section IV" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to 4 (inclusive)" << endl;

    sum = 0;
    for (i=0; i<=4; i++) {
        sum += i*i;
    }

    cout << "The sum of squares from 1 to 4 is: " << sum << endl;


// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = put ++count into the loop, and change counter < 10 to counter < 5
// TESTS: make sure the resulting total = 100

    cout << endl;
	cout << "******************" << endl;
	cout << "Section V" << endl;
	cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    while (counter < 5) {
        sum += (counter * counter * counter);
        ++counter;
    }


    cout << "The sum of cubes from 1 to 4 is: " << sum << endl;

    cout << endl;
	cout << "******************" << endl;
	cout << "Section Done" << endl;
	cout << "******************" << endl;

	cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;



    return 0;
}
