#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void readData(string fileName);
void displayData();

int main() {
	vector<string> restaurantData;
	readData("restaurantLab1.txt");
}
void readData(string fileName) {
	ifstream infile(fileName);
	string line = "";

	if (!infile.is_open()) {
		cout << "file not found... exiting...";
		exit(0);
	}//end if

	while (!infile.eof) {
		getline(infile, line);
		istringstream iss(line);
	}
}
