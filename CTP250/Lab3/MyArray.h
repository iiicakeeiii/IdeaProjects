#pragma once
#ifndef MYARRAY_H
#define MYARRAY_H

#include "ArrayInterface.h"

using namespace std;

template <typename T> //<class T>
class MyArray : public ArrayInterface<T> {

	private:
	    static const in START_SIZE = 10;
	        T theArray[START_SIZE];

    public:
        MyArray();
        MyArray(T []);

        void displayArray();
        T maximumElement();
        int countOccurrenceOf(T& [], T);
        void increaseElementsBy(T& [], T);
        void printReverse();
        
};

template <typename T>
MyArray<T>::MyArray (){
    for (int i = 0; i < 10; i++)
        theArray[i] = 0;

}//end default constructor

template <typename T>
MyArray<T>::MyArray(T arr[]){
    for (int i = 0; i < 10; i++)
        theArray[i] = arr[i];
}//end second constructor

template <typename T>
int MyArray<T>::countOccurrenceOf(T& arr[], T item) {
	int matches = 0;
	for (T i : arr) {
		if (i == item) {
			matches++;
		}
	}
	return matches;
}

template <typename T>
void MyArray<T>::printReverse() {
	return;
}

template <typename T>
void MyArray<T>::increaseElementsBy(T arr[], T item) {
	
}

template <typename T>
void MyArray<T>::displayArray(){
    for (int i = 0; i < 10; i++)
        cout << "[" << i << "] = " << theArray[i] << endl;
}


template<typename T>
T MyArray<T>::maximumElement(){
    T max = theArray[0];

    for (int i = 1; i < 10; i++)
        if (theArray[i] > max)
            max = theArray[i];

    return max;
}

#endif // MYARRAY_H
