#pragma once

template<typename T>
class ArrayInterface {

public:

    virtual T maximumElement() = 0;
    virtual int countOccurrenceOf(T) = 0;
    virtual void increaseElementsBy(T) = 0;
    virtual void printReverse() = 0;
    virtual bool find(T) = 0;
    virtual bool isFull() = 0;
    virtual void fillRemaining() = 0;
    virtual void add(T) = 0;
	virtual void removeLast() = 0;
    virtual bool remove(T) = 0;
    virtual int getSize() = 0;
    
};
