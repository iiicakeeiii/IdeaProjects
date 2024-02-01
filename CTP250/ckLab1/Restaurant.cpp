#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

void readData(const vector<string>&, const string&);
void displayData();

int main() {
	vector<string> restaurantData;
	string fileName = "restaurantLab1.txt";
	readData(restaurantData, fileName);
}//end main();

void readData(const vector<string>& restaurantData, const string& fileName) {
	ifstream infile(fileName);
	string line = "";

	if (!infile.is_open()) {
		cout << "file not found... exiting...";
		exit(0);
	}//end if;

	while (!infile.eof()) {
		
		getline(infile, line);
		restaurantData.push_back(line);
	}//end while;
	cin.ignore();

	int size = restaurantData.size();
	for (int i = 0; i < size; i++) {
		cout << "data: " << restaurantData[i] << endl;
	}//end for;
	
	infile.close();
}//end readData();
