#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

double ques2(double);
double rateOfC(double, double, double , double);
double rateOfC2(double, double);
void getInput();
void getInput2();

int main() {
	string input = "";
	
	while (!(input == "n")) {
		int val = 0;
		cout << "Option: ";
		cin >> val;
		val == 1 ? getInput() : getInput2();
		getline(cin, input);
	}

}//main

double ques2(double num) {
	return 2 * sin((3.14 * num)) + 3 * cos((3.14 * num));
}//ques2

double rateOfC(double x1, double x2, double y1, double y2) {
	return (y2 - y1) / (x2 - x1);
}//rateOfC

double rateofC2(double x1, double x2) {
	return (ques2(x2) - ques2(x1)) / (x2 - x1);
}//rateOfC2

void getInput() {
	string temp = ";";

	cout << "x1: ";
	getline(cin, temp);
	double x1 = stod(temp);

	cout << "y1: ";
	getline(cin,temp);
	double y1 = stod(temp);

	cout << "x2: ";
	getline(cin,temp);
	double x2 = stod(temp);

	cout << "y2: ";
	getline(cin,temp);
	double y2 = stod(temp);

	cout << rateOfC(x1, x2, y1, y2) << endl;
}//getInput

void getInput2() {
	string temp = "";

	cout << "x1: ";
	getline(cin, temp);
	double x1 = stod(temp);

	cout << "x2: ";
	getline(cin,temp);
	double x2 = stod(temp);

	cout << rateOfC2(x1, x2) << endl;

}//getInput2
