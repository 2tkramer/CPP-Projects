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

    srand(time(0));
    
    RenderWindow window(VideoMode(640, 480), "SFML Window");
    window.setFramerateLimit(40);
    
    vector<Bubble> myBubbles(5);
        
    while (window.isOpen()) {
        
        window.clear();
       
        for (int i = 0; i < myBubbles.size(); ++i) {
        
           window.draw(myBubbles[i].getBubble());
           myBubbles[i].updatePosition();
        }
       
        window.display();
        
        double inputx;
        double inputy;
       
        Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
            else if(event.type == Event::MouseButtonPressed) {
                inputx = event.mouseButton.x;
                inputy = event.mouseButton.y;
                myBubbles.push_back(Bubble(inputx, inputy));
            }
            else if (event.type == Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::D) {
                    myBubbles.pop_back();
                }
            }
        }  
    }

   return 0;
}
