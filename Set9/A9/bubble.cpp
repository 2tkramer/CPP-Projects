/* CSCI261 Lab: Bubble Class
 *
 * Description: Definition file for Bubble Class
 *
 * Author: Taylor Kramer
 *
 */
 
#include "bubble.h"
#include <SFML/Graphics.hpp>
#include <cstdlib>

using namespace sf;
using namespace std;

Bubble::Bubble() {
    x = (rand() % 25)/10;
    y = (rand() % 25)/10;
    xo = 100 + rand() % 301;
    yo = 100 + rand() % 301;
}

Bubble::Bubble(double xAdd, double yAdd) {
    bubble.setRadius(radius);
    xo = (xAdd - radius);
    yo = (yAdd - radius);
    bubble.setFillColor(Color(r,g,b));
    bubble.setPosition(xo,yo);
    bubble.updatePosition();
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
    checkPosition();
}

CircleShape Bubble::getBubble() {
    bubble.setRadius(radius);
    bubble.setFillColor(Color(r,g,b));
    bubble.setPosition(xo,yo);
    return bubble;
}


void Bubble::checkPosition() {
    if ((xo+(radius*2)) >= 640) {
        x = x * (-1);
    }
    else if ((yo+(radius*2)) >= 480) {
        y = y * (-1);
    }
    else if ((xo) <= 0) {
        x = x * (-1);
    }
    else if ((yo) <= 0) {
        y = y * (-1);
    }
    
}

