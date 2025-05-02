
#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 11);
    int subscription = dis(gen);

    cout << "Welcome to MyAPP.COM..." << endl;

    if (subscription == 0) {
        cout << "Your subscription has expired" << endl;
    }

     else if (subscription <= 1) {
        cout << "Your subscription will expire within a Day. Renew now and save 20%!" << endl;
    }

     else if (subscription <= 5) {
        cout << "Your subscription will expire in " << subscription << " days. Renew now and save 10%!" << endl;
    } 

    else if (subscription <= 10) {
        cout << "Your subscription will expire soon" << endl;
    } 
    
    else {
        cout << "You have an active subscription..." << endl;
    }

    return 0;
}