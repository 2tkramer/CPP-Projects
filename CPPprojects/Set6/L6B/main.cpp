/* CSCI 261 Assignment: L6B
 *
 * Author: Taylor Kramer
 */

#include <iostream> // For cin, cout, etc.
// #include <iomanip>  // For fixed, setprecision, etc.
// #include <cstdlib>  // For rand commmands
// #include <ctime>    // For rand(time())
// #include <cstdbool> // For boolean statements
// #include <string>   // For strings
// #include <cstring>  // For c strings and mod functions
// #include <cmath>    // For sin, cos, etc.
// #include <cctype>   // For char types
// #include <vector>   // For vectors
// #include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


using namespace sf;
// using namespace std;

int main () {
    
    RenderWindow window(VideoMode(640, 480), "SFML Window");
    
    while (window.isOpen()) {
        window.display();
        
        Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == Event::KeyPressed) {
                window.close();
            }
        
            // drawing water
            CircleShape polygon(50, 3);
            polygon.setFillColor(Color(0, 0, 200)); 
            polygon.setPosition(Vector2f(0, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(50, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(100, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(150, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(200, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(250, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(300, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(350, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(400, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(450, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(500, 425));
            window.draw( polygon );
            polygon.setPosition(Vector2f(550, 425));
            window.draw( polygon );
            
            // boat
            ConvexShape convex;
            convex.setPointCount(4);
            convex.setFillColor(Color(100, 0, 155));
            convex.setPoint(0, Vector2f(105, 320));
            convex.setPoint(1, Vector2f(485, 320));
            convex.setPoint(2, Vector2f(455, 425));
            convex.setPoint(3, Vector2f(135, 425));
            window.draw( convex );
            
            // rod
            RectangleShape rect;
            rect.setSize(Vector2f(10, 217));
            rect.setFillColor(Color(30,150,75));
            rect.setPosition (295, 100);
            window.draw( rect );
            
            // sail one
            ConvexShape sailone;
            sailone.setPointCount(3);
            sailone.setFillColor(Color(255, 255, 255));
            sailone.setPoint(0, Vector2f(290, 120));
            sailone.setPoint(1, Vector2f(290, 310));
            sailone.setPoint(2, Vector2f(95, 310));
            window.draw( sailone );
            
            // sail two
            ConvexShape sailtwo;
            sailtwo.setPointCount(3);
            sailtwo.setFillColor(Color(255, 255, 255));
            sailtwo.setPoint(0, Vector2f(310, 155));
            sailtwo.setPoint(1, Vector2f(550, 310));
            sailtwo.setPoint(2, Vector2f(310, 310));
            window.draw( sailtwo );
            
            //red sail
            ConvexShape redsail;
            redsail.setPointCount(3);
            redsail.setFillColor(Color(255, 0, 0));
            redsail.setPoint(0, Vector2f(310, 100));
            redsail.setPoint(1, Vector2f(370, 126));
            redsail.setPoint(2, Vector2f(310, 152));
            window.draw( redsail );
        }
    }    

   return 0;
}
