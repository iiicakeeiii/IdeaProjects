#pragma once
#ifndef
#define

#include <string>
#include <iostream>

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
    void add(T);
    void removeLast();
    bool remove(T);
    int getSize(T []);
};

template <typename T>
MyArray<T>::MyArray () { 
    for (int i = 0; i < DEFAULT_SIZE; i++) {
        theArray[i] = 0;
    }
}//end default constructor

template <typename T>
MyArray<T>::MyArray(T arr[]) {
	int size = getSize(arr);
	if (size > DEFAULT_SIZE) {
		size = DEFAULT_SIZE;
	}
    for (int i = 0; i < size; i++) {
        theArray[i] = arr[i];
        currentNumElem++;
    }
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
	for (int i = currentNumElem; i > 0; i--) {
		cout << theArray[i] << endl;
	}
}

template <typename T>
void MyArray<T>::increaseElementsBy(T item) {
	string temp = "";
	for (int i = 0; i < cu; i++) {
		theArray[i] =  theArray[i] + item;
	}
}

template <typename T>
void MyArray<T>::displayArray() {
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
	theArray[currentNumElem] = 0;
	currentNumElem--;
}

template <typename T>
bool MyArray<T>::remove(T item) {
	bool found = false;
	for (int i = 0; i < currentNumElem; i++ ) {
		if (theArray[i] == item) {
			theArray[i] = 0;
			found = true;
			return found;
		}
	}
	return found;
}

int MyArray<T>::getSize(T arr[]) {
	int count = 0;
	while (!!arr[count]) {
		count++;
	}
	return count;
}

#endif // MYARRAY_H
