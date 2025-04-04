#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed random number generator
    srand(time(0));
    // Generates random numbers between 0 to 11
    int daysUntilExpiration = rand() % 11;

    // Using the switch statement in our program
    switch(daysUntilExpiration) {
        case 0: cout << "Your Subscription Has Expired" << endl; break;
        case 1: cout << "Your Subscription Expires Within a Day!"<< "\n" << "Renew now and save 20%!" << endl; break;
        case 2: cout << "Your Subscription Expires in Value Of " << daysUntilExpiration << " days" << "\n" << "Renew now and save 10%!" << endl; break;
        case 3: cout << "Your Subscription Expires in Value Of " << daysUntilExpiration << " days" << "\n" << "Renew now and save 10%!" << endl; break; 
        case 4: cout << "Your Subscription Expires in Value Of " << daysUntilExpiration << " days" << "\n" << "Renew now and save 10%!" << endl; break; 
        case 5: cout << "Your Subscription Expires in Value Of " << daysUntilExpiration << " days" << "\n" << "Renew now and save 10%!" << endl; break; 
        case 6: cout << "Your Subscription Will Expire Soon. Renew now!" << endl; break;
        case 7: cout << "Your Subscription Will Expire Soon. Renew now!" << endl; break;
        case 8: cout << "Your Subscription Will Expire Soon. Renew now!" << endl; break;
        case 9: cout << "Your Subscription Will Expire Soon. Renew now!" << endl; break;
        case 10: cout << "Your Subscription Will Expire Soon. Renew now!" << endl; break;
        default: cout << "You Have an Active Subscription" << endl;

        return 0;
    }
}