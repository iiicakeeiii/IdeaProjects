#pragma once
#include <iostream>
#include <string>

using namespace std;

//void getUserInput() {
//
//}

int getTip(string prompt) {
    string temp = "";

    cout << prompt;
    getline(cin, temp);

    return stoi(temp);

}//end getTip()

string getServer(string prompt) {
    string str = "";

    cout << prompt;
    getline(cin, str);

    return str;

}//end getServer()

double getBill(string prompt) {
    string temp = "";

    cout << prompt;
    getline(cin, temp);

    return stod(temp);

}//end getBill()

string getRestaurant(string prompt) {
    string str;

    cout << prompt;
    getline(cin, str);

    return str;

}// end getRestaurant()

double calcTotal(double bill, int tipPercentage) {

    return bill + bill * (tipPercentage * .01);

}//end calTotal()