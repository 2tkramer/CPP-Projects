/* CSCI261 Lab: Bubble Class
 *
 * Description: Declaration file for Bubble Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#pragma once
using namespace sf;
using namespace std;

class Bubble {
    public:
        Bubble();
        Bubble(double xAdd, double yAdd);
        void updatePosition();
        double getx();
        double gety();
        CircleShape getBubble();
        void setx(double inputx);
        void sety(double inputy);
        // void CirclePosition();
    private:
        double xo;
        double yo;
        double x;
        double y;
        int r = rand() % 255;
        int g = rand() % 255;
        int b = rand() % 255;
        void checkPosition();
        int radius = 10 + rand() % 41;
        CircleShape bubble;
};