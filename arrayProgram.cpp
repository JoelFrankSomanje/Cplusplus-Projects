#include <iostream>
#include <string>
using namespace std;

int main() {
    string array[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Obtaining the size of our array of String
    int size = sizeof(array) / sizeof(array[0]);

    // Iterating through each element of the array
    for(int i = 0; i<size; i++){
        // Checking the first character(at [0]) of the String at position i.
        if(array[i][0] == 'B'){
            cout << "Each element that starts with the letter B are as follows: " << array[i] << endl;
        }
    }

    return 0;
}