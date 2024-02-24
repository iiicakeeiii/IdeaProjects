#pragma once

template<typename T>
class ArrayInterface {
public:
    virtual T maximumElement() = 0;
    virtual int countOccurrenceOf(T [], T) = 0;
    virtual void increaseElementsBy(T [], T) = 0;
    virtual void printReverse() = 0;
};
