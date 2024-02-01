/*
 1. Write a program to:
	 a. request of your user a restaurant name
	 b. request of your user a server name
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
   "restaurantLab1Output.txt"
*/

#include <iostream>
//#include <iomanip>
#include <string>
#include "utilities.h"
#include <vector>

using namespace std;

double calcTotal(double, int);

void displayTotal(const string&, );

int main() {

	string restaurant, server, temp;
    double bill = 0.0, total = 0.0;
    int tipPercentage = 0;


	restaurant = getRestaurant("Enter Restaurant name: ");

    server = getServer("Enter Server name: ");

	bill = getBill("Enter bill amount: ");

    tipPercentage = getTip("Enter the amount you would like to tip (ie. for ten percent enter: 10): ");

	total = calcTotal(bill, tipPercentage);

	cout << total << endl;

} //end main()

void displayTotal() {

}

