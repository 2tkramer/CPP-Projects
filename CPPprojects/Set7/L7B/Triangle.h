/* CSCI261 Lab: Trianlge Class
 *
 * Description: Declaration file for Traingle Class
 *
 * Author: Taylor Kramer
 *
 */

#pragma once

class Triangle {
    public:
        Triangle();
        int getSide1();
        int getSide2();
        int getSide3();
        void setSide1(int s1);
        void setSide2(int s2);
        void setSide3(int s3);
        bool testTri();
        int Addsides();
        int Area();
    private:
        int side1;
        int side2;
        int side3;
        int addsides;
        int halfPerimeter;
};