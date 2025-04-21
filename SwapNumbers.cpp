// Program for passing by reference using pointers
#include <iostream>
using namespace std;
void SwapNumbers(int * varA, int * varB) {
    int temp = *varA;
    *varA = *varB;
    *varB = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before Swap: " << varA << endl; // varA is 25
    cout << "varB before Swap: " << varB << endl; // varB is 100
    
    SwapNumbers(&varA, &varB);
    cout << "varA after Swap: " << varA << endl;
    cout << "varB after Swap: " << varB << endl;

    return 0;
}