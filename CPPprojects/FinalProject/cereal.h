/* CSCI261 Lab: Cereal Class
 *
 * Description: Declaration file for Magic Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#include "cstruct.h"
#pragma once

using namespace std;

class Cereal {
    public:
        Cereal();
        void introduction();
        void dataArray();
        void printResults();
        // getters & setters
        void ques1();
        void ques2();
        void ques3();
        void ques4();
        void ques5();
        void ques6();
        void ques7();
        void ques8();
        void ques9();
    private:
        string ans1;
        string ans2;
        double ans3;
        double ans4;
        double ans5;
        double ans6;
        double ans7;
        double ans8;
        double ans9;
        void structArray(vector<vector<string>> carray);
        vector<CerealInfo> structVec;
    
};

/* Q1: Is it important that your soul cereal does not contain High-fructose corn syrup? (type "y" or "n"): 
   Q2: What about having trans fats in your cereal? is it neccessary that your cereal does not have 
       any trans fats?(type "y" or "n"): 
       *** all of the following questions are based on a serving size of 1 cup ***
       disclaimer: the writing in parenthesis are all suggestions. in order to not eliminate
                   all of the cereals in the data set, try to keep preferences somewhat conservative unless 
                   there is a preference that you feel particularly strong about
   Q3: What is your ideal maximum grams of saturated fats (starting with a minimum of 0 grams per serving)?:
   Q4: What is your ideal maximum number of calories (starting with a minimum of 100 per serving)?:  
   Q5: What is your ideal maximum grams of total fats (starting with a minimum of 0 grams per serving)?: 
   Q6: What is your ideal maximum grams of sugar (starting with a minimum of 3 grams per serving)?: 
   Q7: How much fiber do you prefer in your cereal (there is a maximum of 10 grams)?: 
   Q8: What is your ideal grams of protein (the maximum value for this is 5 grams)?: 
   Q9: What is your ideal maximum number of carbohydrates (starting with a minimum of 25 grams per serving)?: 

*/