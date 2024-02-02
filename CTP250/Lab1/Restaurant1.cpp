#include <iostream>
#include <string>
#include "utilities.h"

using namespace std;
double calcTotal(double, int);
void displayTotal(const string&, const string&,const double&, const int&, const double&);

int main() {

	string restaurant, server, temp;
    double bill = 0.0, total = 0.0, tipPercentage = 0;


	restaurant = getRestaurant("Enter Restaurant name: ");
    server = getServer("Enter Server name: ");
	bill = getBill("Enter bill amount: ");
    tipPercentage = getTip("Enter the amount you would like to tip (ie. for ten percent enter: 10): ");
	total = calcTotal(bill, tipPercentage);
	cout << total << endl;

    displayTotal(restaurant,server, bill, tipPercentage, total);

} //end main()

