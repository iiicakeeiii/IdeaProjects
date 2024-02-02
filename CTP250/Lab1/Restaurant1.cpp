#include <iostream>
#include <string>
#include "utilities.h"

using namespace std;

int main() {

	string restaurant, server, temp;
    double bill = 0.0, total = 0.0, tipPercentage = 0;

	restaurant = getRestaurant("Enter Restaurant name: ");
    server = getServer("Enter Server name: ");
	bill = getBill("Enter bill amount: ");
    tipPercentage = getTip("Enter the amount you would like to tip (ie. for ten percent enter: 10): ");
	total = calcTotal(bill, tipPercentage);

    cout << endl;
    displayTotal(restaurant,server, bill, tipPercentage, total);
    cout << endl;
} //end main()

