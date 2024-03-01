/* CSCI261 Lab: Date Class
 *
 * Description: Declaration file for Date Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>
#include <cstring>
#pragma once

using namespace std;

class Date {
    public:
        Date();
        void setDate(string inputdate);
        bool valiDate();
        void getDate();
        int compare();
        void output();
        
    private:
        string date;
        string d;
        string day = "";
        string month = "";
        string year = "";
        int intday;
        int intmonth;
        int intyear;
        int iday = 30;
        int imonth = 12;
        int iyear = 1950;
};