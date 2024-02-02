#include <iostream>
#include <vector>
#include "utilities.h"

using namespace std;

int main() {

    vector<string> restaurantData;
    string fileName = "restaurantLab1.txt";

    restaurantData = readData(fileName);
    double total = calcTotal(stod(restaurantData.at(2)), stod(restaurantData.at(3)));

    displayData(restaurantData, total);

}//end main();


