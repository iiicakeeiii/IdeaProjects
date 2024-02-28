#include <iostream>
#include <string>
#include "MyArray.h"

using namespace std;

int main()
{

    int anArray[10] = {1,2,3,4,5,6,7,8,9,10};
    double anArray2[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8,9.9, 10.10};
    char anArray3[10] = {'a', 'b' ,'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    string anArray4[10] = {"random", "list", "of", "strings", "random", "list", "of", "strings", "strings"};

    MyArray<int> myArr(anArray);

    // myArr.displayArray();

    MyArray<double> myArr2 (anArray2);

    // myArr2.displayArray();
      
    MyArray<char> myArr3(anArray3);

    MyArray<string> myArr4(anArray4);

    // myArr3.displayArray();
    // myArr3.increaseElementsBy('a');
    // myArr3.displayArray();

    cout <<"Maximum integer: **make sure to fix this part**" << myArr.getSize() << endl;
    cout <<"Maximum size ** double: " << myArr2.getSize() << endl;
    cout <<"Maximum character: " << myArr3.getSize() << endl;
    cout << "Strings: " << myArr4.getSize() << endl;
    return 0;
}
