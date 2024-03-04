/* CSCI261 Lab: Bubble Class
 *
 * Description: Declaration file for Bubble Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#include <SFML/Graphics.hpp>
#pragma once
using namespace sf;
using namespace std;

class Bubble {
    public:
        Bubble();
        void updatePosition();
        double getx();
        double gety();
        CircleShape getBubble();
        void setx(double inputx);
        void sety(double inputy);
        void checkPosition();
        // void CirclePosition();
    private:
        double xo;
        double yo;
        double x;
        double y;
        CircleShape bubble;
};