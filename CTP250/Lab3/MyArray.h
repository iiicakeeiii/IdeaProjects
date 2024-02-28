#pragma once
#ifndef MYARRAY_H
#define MYARRAY_H

#include <string>
#include <iostream>
#include <sstream>
#include "ArrayInterface.h"

using namespace std;

template <typename T> //<class T>
class MyArray : public ArrayInterface<T> {

private:
	static const int DEFAULT_SIZE = 25;
	T theArray[DEFAULT_SIZE];
	int currentNumElem = 0;

public:
    MyArray();
    MyArray(T []);

    void displayArray() const;
    void printReverse();
    T maximumElement();
    int countOccurrenceOf(T);
    void increaseElementsBy(T);
    bool find(T);
    bool isFull();
    void fillRemaining();
    void add(T);
    void removeLast();
    bool remove(T);
    int getSize();
    
};

template <typename T>
MyArray<T>::MyArray () { 
    fillRemaining();
}//end default constructor

template <typename T>
MyArray<T>::MyArray(T arr[]) {
	
    while (!isFull()) {
    	cout << "Array element:  " << arr[currentNumElem] << endl;
    	theArray[currentNumElem] = arr[currentNumElem];
    	currentNumElem++;

    	if ((isFull())) {
    	
    	fillRemaining();
    	}
    }
    
    cout << "Array amount: " << currentNumElem << endl;
    displayArray();
    
}//end second constructor

template <typename T>
int MyArray<T>::countOccurrenceOf(T item) {
	int matches = 0;
	for (int i = 0; i < currentNumElem; i++) {
		if (theArray[i] == item) {
			matches++;
		}
	}
	
	return matches;
}

template <typename T>
void MyArray<T>::printReverse() {
	for (int i = currentNumElem; i >= 0; i--) {
		cout << theArray[i] << endl;
	}
}

template <typename T>
void MyArray<T>::increaseElementsBy(T item) {
	string temp = "";
	for (int i = 0; i < currentNumElem; i++) {
		theArray[i] =  theArray[i] + item;
	}
}

template <typename T>
void MyArray<T>::displayArray() const {
    for (int i = 0; i < currentNumElem; i++) {
        cout << "[" << i << "] = " << theArray[i] << endl;
    }
}

template<typename T>
T MyArray<T>::maximumElement() {
    T max = theArray[0];

    for (int i = 1; i < 10; i++)
        if (theArray[i] > max)
            max = theArray[i];
    return max;
}

template <typename T>
bool MyArray<T>::find(T item) {
	for (T i : theArray) {
		if (i == item) {
			return true;
		}
	}
	return false;
}

template <typename T>
bool MyArray<T>::isFull() {

	return currentNumElem == DEFAULT_SIZE;
	
}

template <typename T>
void MyArray<T>::fillRemaining() {

	stringstream iss;
	iss << theArray[0];
	int i;
	iss >> i;
	
	T fill = theArray[0];
	int lastIndex = currentNumElem;
	while (lastIndex < DEFAULT_SIZE) {
		theArray[lastIndex] = fill;
		lastIndex++;
	}
}

template <typename T>
void MyArray<T>::add(T item) {
	if (isFull()) {
		cout << "Array is full." << endl;
		return;
	}
	
	theArray[currentNumElem] = item	;
	currentNumElem++;
}

template <typename T>
void MyArray<T>::removeLast() {
	theArray[currentNumElem] = theArray[currentNumElem + 1];
	currentNumElem--;
}

template <typename T>
bool MyArray<T>::remove(T item) {

	for (int i = 0; i < currentNumElem; i++) {
		if (theArray[i] == item) {
			theArray[i] = theArray[DEFAULT_SIZE - 1];
			return true;
		}
	}
	
	return false;
}	

#endif // MYARRAY_H
