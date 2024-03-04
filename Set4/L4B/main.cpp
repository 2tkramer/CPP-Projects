/* CSCI 261: Fix Function Errors
 *
 * Author: Taylor Kramer
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2018 Dr. Jeffrey Paone

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

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// input: integer
// output: integer plus 5
// adds five to the given parameter
int addFive( int x ) {
  x += 5;
  return x;
}



// input: none
// output: a random number
int generateRandomNumber() {
      return rand() % 100;
    }

// input: three integers
// output: the sum of all three parameters
int sum( int x, int y, int z ) {
  return x + y + z;
}

// input: two doubles
// output: the product of the two doubles
double multiply( double a, double b)  {
    return (a * b);
}

void printSmileyFace() {
  cout << "  - - " << endl;
  cout << "   o  " << endl;
  cout << "\\----/" << endl;
}

int main() {
    
    srand( time(0) );
    
    cout << "Welcome to Function World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = change void function to int function, set addFive( numTrees ) = to numTrees
// TESTS: we expect to see the number 9 for number of trees now

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int numTrees = 4;
    cout << "There are initially " << numTrees << " trees." << endl;
    numTrees = addFive( numTrees );
    cout << "We planted five trees, there are now " << numTrees << " trees." << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = put printSmileyFace() above the int main() function
// TESTS: ensure that is shows on the screen

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section II" << endl;
	  cout << "******************" << endl;

    printSmileyFace();

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = place srand( time(0) ); in int main function because it needs to be in 
//       function but should not reset giving the same number each time
// TESTS: ensure all random numnbers are different and below 100

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section III" << endl;
	  cout << "******************" << endl;

    cout << "Five different random numbers are: " << endl;
    for( int i = 0; i < 5; i++ ) {
      cout << "\t" << generateRandomNumber() << endl;
    } 


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX =  add num3 after the num1, num2 in the function call and 
//        make change x + x + x to x + y + z in function
// TESTS: 0,0,0 , positives, negatives, both, w/ zero; make sure they 
//        result in the correct final answer

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section IV" << endl;
	  cout << "******************" << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of all three is " << sum( num1, num2, num3 ) << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = put the () after generateRandomNumber
// TESTS: make sure there are random numbers under 100 getting outputted

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section V" << endl;
	  cout << "******************" << endl;

    cout << "Another random number is " << generateRandomNumber() << endl;

// SECTION VI: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = define the multiply function
// TESTS:

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section VI" << endl;
	  cout << "******************" << endl;

    double doub1, doub2;
    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "Their product is: " << multiply( doub1, doub2 ) << endl;

    cout << endl;
	  cout << "******************" << endl;
	  cout << "Section Done" << endl;
	  cout << "******************" << endl;

	  cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}





