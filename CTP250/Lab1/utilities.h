#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include "utilities.h"

using namespace std;

/**
 * Reads data from a file and stores it in the provided vector of strings.
 * If the file is not found, it displays an error message and exits the program.
 * @param restaurantData The vector to store the data read from the file.
 * @param fileName       The name of the file to read data from.
 */
vector<string> readData(const string& fileName) {
    ifstream infile(fileName);
    string line = "";
    vector<string> restaurantData;

    if (!infile.is_open()) {
        cout << "file not found... exiting...";
        exit(0);
    }//end if;

    while (!infile.eof()) {

        getline(infile, line);
        restaurantData.push_back(line);

    }//end while;

    cin.clear();
    infile.close();
    return restaurantData;

}//end readData();

/**
 * Displays the details of a restaurant bill, including restaurant name, server name,
 * bill amount, tip percentage, and total amount.
 * @param restaurant     The name of the restaurant.
 * @param server         The name of the server.
 * @param bill           The bill amount.
 * @param tipPercentage  The tip percentage.
 * @param total          The total amount including tip.
 */
void displayTotal(const string& restaurant, const string& server,
                  const double& bill, const int& tipPercentage,
                  const double& total) {

    cout << "Restaurant: " << restaurant << endl;
    cout << "Server: " << server << endl;
    cout << "Bill: " << bill << endl;
    cout << "Tip Percentage: " << tipPercentage << "%" << endl;
    cout << "Total Amount: " << total << endl;
    cin.clear();

}//end displayTotal();

/**
 * Prompts the user for a tip percentage and returns the entered value as an integer.
 * @param prompt  The prompt message to display to the user.
 * @return        The tip percentage entered by the user.
 */
double getTip(string prompt) {
    string temp = "";

    cout << prompt;
    getline(cin, temp);

    return stod(temp);

}//end getTip()

/**
 * Prompts the user for the name of the server and returns it as a string.
 * @param prompt  The prompt message to display to the user.
 * @return        The name of the server entered by the user.
 */
string getServer(string prompt) {
    string str = "";

    cout << prompt;
    getline(cin, str);

    return str;

}//end getServer()

/**
 * Prompts the user for the bill amount and returns it as a double.
 * @param prompt  The prompt message to display to the user.
 * @return        The bill amount entered by the user.
 */
double getBill(string prompt) {
    string temp = "";

    cout << prompt;
    getline(cin, temp);

    return stod(temp);

}//end getBill()

/**
 * Prompts the user for the name of the restaurant and returns it as a string.
 * @param prompt  The prompt message to display to the user.
 * @return        The name of the restaurant entered by the user.
 */
string getRestaurant(string prompt) {
    string str;

    cout << prompt;
    getline(cin, str);

    return str;

}// end getRestaurant()

/**
 * Calculates the total amount including tip based on the bill amount and tip percentage.
 * @param bill          The bill amount.
 * @param tipPercentage The tip percentage.
 * @return              The total amount including tip.
 */
double calcTotal(double bill, double tipPercentage) {

    return bill + (bill * tipPercentage);

}//end calcTotal()

/**
 * Displays the restaurant data and total amount including tip.
 * @param restaurantData A vector containing restaurant-related data, including name,
 *                      server, bill, and tip percentage.
 * @param total         The total amount including tip.
 */
void displayData(const vector<string>& restaurantData, const double& total) {

    cout << "Restaurant: " << restaurantData.at(0) << endl;
    cout << "Server: " << restaurantData.at(1) << endl;
    cout << "Bill: " << stod(restaurantData.at(2)) << endl;
    cout << "Tip Percentage: " << stod(restaurantData.at(3)) << "%" << endl;
    cout << "Total Amount: " << total << endl;

    cin.clear();

}//displayData();