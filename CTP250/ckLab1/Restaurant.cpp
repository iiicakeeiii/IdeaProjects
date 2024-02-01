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
}//end main();

void readData(string fileName) {
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

	int size = restaurantData.size();
	for (int i = 0; i < size; i++) {
		cout << restaurantData[i];
	}//end for;
	
	infile.close();
}//end readData();
