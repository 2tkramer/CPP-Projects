/* CSCI261 Lab: Bubble Class
 *
 * Description: Definition file for Bubble Class
 *
 * Author: Taylor Kramer
 *
 */
 
#include "bubble.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

Bubble::Bubble() {
    x = 1;
    y = 1;
    xo = 1;
    yo = 2;
}

void Bubble::setx(double inputx) {
    x = inputx;
}

void Bubble::sety(double inputy) {
    y = inputy;
}

double Bubble::getx() {
    return xo;
}

double Bubble::gety() {
    return yo;
}

void Bubble::updatePosition() {
    xo = xo + x;
    yo = yo + y;
    bubble.setPosition(xo,yo);
}

CircleShape Bubble::getBubble() {
    bubble.setRadius(50);
    bubble.setFillColor(Color(255,255,255));
    bubble.setPosition(xo,yo);
    return bubble;
}


void Bubble::checkPosition() {
    if ((xo+100) >= 640) {
        x = x * (-1);
    }
    else if ((yo+100) >= 480) {
        y = y * (-1);
    }
    else if ((xo) <= 0) {
        x = x * (-1);
    }
    else if ((yo) <= 0) {
        y = y * (-1);
    }
    
}

