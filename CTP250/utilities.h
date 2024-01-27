#pragma once
#include <iostream>

using namespace std;

void getUserInput() {
	string restaraunt = "",
			   server = "";
		double bill = 0.0,
			   total = 0.0;
		int tipPercentage = 0;
	
		cout << "Enter Restaraunt name: ";
		cin >> restaraunt;
		cout << restaraunt << endl;a
	
		cout << "Enter Server name: ";
		cin >> server;
		cout << server << endl;
	
		cout << "Enter bill amount: ";
		cin >> bill;
		cout << bill << endl;
	
		cout << "Enter the amount you would like to tip (ie. for ten percent enter: 10): ";
		cin >> tipPercentage;
}
