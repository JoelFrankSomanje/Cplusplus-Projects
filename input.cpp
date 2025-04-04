#include <iostream>
#include <limits> // Provides a set of numeric limits for fundamental data types.
using namespace std;

int main() {
    int num;
    bool validInput = false;

    while(!validInput) {
        cout << "Enter an integer value between 5 and 10: ";

        // Check if the num(input) is an integer
        if (cin >> num) {
            // Check if the value entered is within range
            if(num >= 5 && num <= 10) {
                validInput = true;
            }
            else {
                cout << "You entered " << num << " .Please enter a number between 5 and 10." << endl;
            }
        }
        else {
            // Clear the error flags and ignore the rest of the line
            cin.clear(); /*Clears the error flags experienced at cin. In that case our error that was cleared could be that of
            a string.eg. Entering FIVE instead of an integer 5 which avoids the CIN to enter a failed state.*/
            
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discards invalid input from the buffer
            cout << "Sorry, you entered an invalid number, please try again." << endl;
        }
    }
    cout << "Your input value (" << num << ") has been accepted" << endl;

    return 0;
}