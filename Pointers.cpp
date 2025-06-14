#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    // assign Pointer with the address of firstValue
    pPointer = &firstValue;
    *pPointer = 10; // Indirection

    // assign a pointer with the address of secondValue
    pPointer = &secondValue;
    *pPointer = 20; // Indirection

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}