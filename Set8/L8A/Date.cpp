/* CSCI261 Lab: Date Class
 *
 * Description: Definition file for Date Class
 *
 * Author: Taylor Kramer
 *
 */
 
#include "Date.h"

using namespace std;

Date::Date() {
    date = "12/30/1950";
}

void Date::setDate(string inputdate) {
    d = inputdate;
}

void Date::getDate() {
    int daylen = 0;
    int monlen = 0;
    unsigned int length = d.size();
    
    for (int i = 0; i < (int)(length); ++i) {
        if (d[i] != ',') {
            day = day + d[i];
            intday = atoi(day.c_str());
        } 
        else if (d[i] == ',') {
            daylen = i;
            break;
        }
        else {
            cout << "Whoops! something went wrong... ";
        }
    }
    for (int i = daylen; i < (int)(length); ++i) {
        if (d[i] != ',') {
            month = month + d[i];
            intmonth = atoi(month.c_str());
        } 
        else if (d[i] == ',') {
            monlen = i;
        }
    }
    for (int i = monlen; i < (int)(length); ++i) {
        if (d[i] != ',') {
            year = year + d[i];
            intyear = atoi(year.c_str());
        } 
    }
    
}

bool Date::valiDate() {
    if (intday >= 1 && intday <= 31 && intmonth >= 1 && intmonth <= 12 && intyear > 0) {
        return 1;
    }
    else {
        return 0;
    }
}


int Date::compare() {
    if (intyear == iyear) {
        if (intmonth == imonth) {
            if (intday == iday) {
                return 2;
            }
            if (intday < iday) {
                return 1;
            }
            if (intday > iday) {
                return 0;
            }
        }    
        if (intmonth < imonth) {
            return 1;
        }
        if (intmonth > imonth) {
            return 0;
        }
    }
    if (intyear < iyear) {
        return 1;
    }
    if (intyear > iyear) {
        return 0;
    }
}


void Date::output() {
    if (compare() == 0) {
        cout << "after";
    }
    else if (compare() == 1) {
        cout << "before";
    }
    else if (compare() == 2) {
        cout << "same";
    }
}