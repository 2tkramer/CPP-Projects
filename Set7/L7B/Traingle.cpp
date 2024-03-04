/* CSCI261 Lab: Triangle Class
 *
 * Description: Definition file for Triangle Class
 *
 * Author: Taylor Kramer
 *
 */
 
#include <math.h> 
#include "Triangle.h"

Triangle::Triangle() {
    side1 = 1;
    side2 = 1;
    side3 = 1;
}

int Triangle::getSide1() {
    return side1;
}

int Triangle::getSide2() {
    return side2;
}

int Triangle::getSide3() {
    return side3;
}

void Triangle::setSide1(int s1) {
    side1 = s1;
}

void Triangle::setSide2(int s2) {
    side2 = s2;
}

void Triangle::setSide3(int s3) {
    side3 = s3;
}

bool Triangle::testTri() {
    if  (((side1 > 0) && (side2 > 0) && (side3 > 0)) &&                                            // All values must be greater than zero
    ((side1 < (side2 + side3)) && (side2 < (side1 + side3)) && (side3 < (side1 + side2)))) {
        return true;
    }
    else {
        return false;
    }
}
    
int Triangle::Addsides() {
    addsides = side1 + side2 + side3;
    return addsides;
}

int Triangle::Area() {
    halfPerimeter = (addsides / 2);
    return sqrt(halfPerimeter * (halfPerimeter - side1) * (halfPerimeter - side2) * (halfPerimeter - side3));;
}
