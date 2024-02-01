/*
 1. Write a program to:
	 a. request of your user a restaurant name
	 b. request of your ulser a server name
	 c. request of your user a restaurant bill amount
	 d. request of your user a tip percentage (10,20 "NOT .10,.20")
	 e. calculate the total bill
	 f. display everything that you know neatly

		Restaurant name: Red Robin
		Server name:
		Bill:
		Tip at (~[Int]%~):
		Total bill:
2. Read data from a file to perform the same. Display will be to an output file called
   "restaurantLab1Ouput.txt"
*/

#include <iostream>
#include <iomanip>
#include <string>
// #include "utilities.h"

using namespace std;

double calcTotal(double, int);
void getUserInput(
	string&, //restaurant
	string&, //server
	double&, //bill
	int&, //tip
	double& //total
);
void displayTotal();

int main() {

	string restaraunt = "",
		   server = "",
		   temp = "";
			double bill = 0.0,
				   total = 0.0;
			int tipPercentage = 0;
			
	cout << "Enter Restaraunt name: ";
	getline(cin, restaraunt);
	cout << restaraunt << endl;
		
	cout << "Enter Server name: ";
	getline(cin, server);
	cout << server << endl;

	cout << "Enter bill amount: ";
	getline(cin, temp);
	bill = stod(temp);
	cout << bill << endl;

	cout << "Enter the amount you would like to tip (ie. for ten percent enter: 10): ";
	getline(cin, temp);
	tipPercentage = stoi(temp);

	total = calcTotal(bill, tipPercentage);

	cout << total << endl;

} //end main()


double calcTotal(double bill, int tipPercentage) {

	return bill + bill * (tipPercentage * .01);
	
}//end calTotal()

