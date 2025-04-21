#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    Rectangle rectangle;
    float Length, Width;
    cout << "Enter the length of the rectangle: ";
    cin >> Length;

    cout << "Enter the width of the rectangle: ";
    cin >> Width;

    rectangle.setLength(Length);
    rectangle.setWidth(Width);

    cout << "The Area Of The Rectangle is " << rectangle.calculateAreaOfRectangle() << endl;

    // New rectangle using an overloaded constructor
    float NewLen, NewWid;
    cout << "\nEnter the length of the second rectangle: ";
    cin >> NewLen;

    cout << "Enter the width of the second rectangle: ";
    cin >> NewWid;

    Rectangle rectangle2(NewLen, NewWid); // Assigning the length & width using an overloaded constructor.

    cout << "The Area of the second rectangle is " << rectangle2.calculateAreaOfRectangle() << endl;

    return 0;
}