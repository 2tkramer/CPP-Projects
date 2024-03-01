/* CSCI 261 Assignment: L9A
 *
 * Author: Taylor Kramer
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
#include <SFML/Graphics.hpp>
#include "bubble.h"


using namespace sf;
using namespace std;

int main () {   

    Bubble MrBounce;
    
    RenderWindow window(VideoMode(640, 480), "SFML Window");
        
    while (window.isOpen()) {
       
       window.clear();
       window.draw(MrBounce.getBubble());
       MrBounce.updatePosition();
       MrBounce.checkPosition();
       window.display();
       
      Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        
        }
        
    }

   return 0;
}
