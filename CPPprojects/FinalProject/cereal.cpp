/* CSCI261 Lab: Magic Class
 *
 * Description: Definition file for Magic Class
 *
 * Author: Taylor Kramer
 *
 */

#include <iostream>
#include <sstream>
#include <vector>   // For vectors
#include <fstream>
#include <cstdbool> // For boolean statements
#include <string>
#include <stdio.h>    
#include <stdlib.h>
#include "cereal.h"
#include "cstruct.h"

using namespace std;

Cereal::Cereal() {
    
}

void Cereal::dataArray() {
    
    ifstream in("CerealData.csv");

    string line;
    string field;

    vector<vector<string>> carray; 
    vector<string> temp;               

    while (getline(in,line)) {   
    
        temp.clear();
        stringstream ss(line);

        while (getline(ss,field,',')) { 
        
            temp.push_back(field);  
        }

        carray.push_back(temp); 
    }
 
    // print array
    // for (size_t i=0; i<carray.size(); ++i) {
    
    //     for (size_t j=0; j<carray[i].size(); ++j) {
        
    //         cout << carray[i][j] << "|"; 
    //     }
    //     cout << endl;
    // }
    
    // cout << carray.size();
    
    structArray(carray);
    
}

void Cereal::structArray(vector<vector<string>> carray) {
    
    for (int i = 0; i < carray.size(); ++i) {
        CerealInfo temp;
        temp.name = carray[i][0];
        temp.servingSize = atof(carray[i][1].c_str());
        temp.calories = atof(carray[i][2].c_str());
        temp.fat = atof(carray[i][3].c_str());
        temp.satFat = atof(carray[i][4].c_str());
        temp.carbs = atof(carray[i][5].c_str());
        temp.fiber = atof(carray[i][6].c_str());
        temp.sugar = atof(carray[i][7].c_str());
        temp.protein = atof(carray[i][8].c_str());
        temp.transFats = carray[i][9];
        temp.HFCS = carray[i][10];
        temp.flag = true;
        
        
        structVec.push_back(temp);
    }
}

void Cereal::introduction() {
    cout << "\n\nHello there! I am a health expert and you need help deciding what your ideal, main brand, breakfast cereal is.\n\n";
    cout << "Your ideal cereal will be purely based on your health preferrences.\n";
    cout << "I will just ask you a series of questions and in the end I will give you a list of cereals that suit you\n";
    cout << "and your preferences best.\n\n";
    cout << "Let's get started!\n\n\n";
}

void Cereal::ques1() {
    cout << "Q1: Is it important that your soul cereal does not contain High-fructose corn syrup? (type 'y' or 'n'): ";
    cin >> ans1;
    
    if (ans1 == "y" || ans1 == "Y") {
        for (int i = 0; i < structVec.size(); ++i) {
            
            if (structVec[i].HFCS == "YES") {
                structVec[i].flag = false;
            }
        }
        cout << endl;
    }
    else if (ans1 == "n" || ans1 == "N") {
        cout << endl;
    }
}

void Cereal::ques2() {
    cout << "Q2: What about having trans fats in your cereal? is it neccessary that your cereal does not have any of those?(type 'y' or 'n'): ";
    cin >> ans2;
    
    if (ans2 == "y" || ans2 == "Y") {
        for (int i = 0; i < structVec.size(); ++i) {
            
            if (structVec[i].transFats == "YES") {
                structVec[i].flag = false;
            }
        }
        cout << endl;
    }
    else if (ans2 == "n" || ans2 == "N") {
        cout << endl;
    }
}

void Cereal::ques3() {
    cout << "Attention: *** all of the following questions are based on a serving size of 1 cup ***\n";
    cout << "disclaimer: the writing in parenthesis are all suggestions. in order to not eliminate\n";
    cout << "all of the cereals in the data set, try to keep preferences somewhat conservative unless\n"; 
    cout << "there is a preference that you feel particularly strong about. Thank you! \n\n";
    cout << "Now moving one :)...\n\n";
    cout << "Q3: What is your ideal maximum grams of saturated fats (starting with a minimum of 0 grams per serving)?: ";
    cin >> ans3;
  
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].satFat > ans3) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
    
}

void Cereal::ques4() {
    cout << "Q4: What is your ideal maximum number of calories (starting with a minimum of 100 per serving)?: ";
    cin >> ans4;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].calories > ans4) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}

void Cereal::ques5() {
    cout << "Q5: What is your ideal maximum grams of total fats (starting with a minimum of 0 grams per serving)?: ";
    cin >> ans5;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].fat > ans5) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}

void Cereal::ques6() {
    cout << "Q6: What is your ideal maximum grams of sugar (starting with a minimum of 3 grams per serving)?: ";
    cin >> ans6;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].sugar > ans6) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}

void Cereal::ques7() {
    cout << "Q7: How much fiber do you prefer in your cereal (there is a maximum of 10 grams)?: ";
    cin >> ans7;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].fiber < ans7) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}

void Cereal::ques8() {
    cout << "Q8: What is your ideal grams of protein (the maximum value for this is 5 grams)?: ";
    cin >> ans8;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].protein < ans8) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}

void Cereal::ques9() {
    cout << "Q9: What is your ideal maximum number of carbohydrates (starting with a minimum of 25 grams per serving)?: ";
    cin >> ans9;
    
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].carbs > ans9) {
            structVec[i].flag = false;
        }
    }
    cout << endl;
}
    

void Cereal::printResults() {
    
    cout << "Here is a list of the cereal(s) that I recommend for you along with all the dietary information: \n\n";
    for (int i = 0; i < structVec.size(); ++i) {
        
        if (structVec[i].flag == true) {
            cout << structVec[i].name << ":" << endl;
            cout << "   Serving size: " << structVec[i].servingSize << endl;
            cout << "   Calories: " << structVec[i].calories << endl;
            cout << "   Fat(g): " << structVec[i].fat << endl;
            cout << "   Saturated Fat(g): " << structVec[i].satFat << endl;
            cout << "   Carbs(g): " << structVec[i].carbs << endl;
            cout << "   Fiber(g): " << structVec[i].fiber << endl;
            cout << "   Sugar(g): " << structVec[i].sugar << endl;
            cout << "   Protein(g): " << structVec[i].protein << endl;
            cout << "   Trans Fats: " << structVec[i].transFats << endl;
            cout << "   High-fructose corn syrup: " << structVec[i].HFCS << endl;
            cout << endl;
        }
        else {
            continue;
        }
    }
}

 