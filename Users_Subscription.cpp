#include <iostream> // a preprocessor directive
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));
    // Generates random numbers between 0 to 11.
    int daysUntilExpiration = rand() % 12;

    if(daysUntilExpiration == 0) {
        cout << "Your Subscription has expired" << endl;
    }

    else if(daysUntilExpiration <= 1) {
        cout << "Your Subscription expires within a day" << endl;
        cout << "Renew now and save 20%!" << endl;
    }

    else if(daysUntilExpiration <= 5) {
        cout << "Your Subscription expires in value of " << daysUntilExpiration<< "days" << endl;
        cout << "Renew now and save 10%!" << endl;
    }

    else if(daysUntilExpiration <= 10) {
        cout << "Your Subscription will expire soon. Renew now!" << endl;
    }
    
    else {
        cout << "You have an active Subscription" << endl;    
    }
    return 0;
}

// The following program allows you to view your subscription.