
#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 11);
    int subscription = dis(gen);

    cout << "Welcome to MyAPP.COM..." << endl << endl;
        switch(subscription){
       case 0:{
        cout << "Your subscription has expired" << endl;
        break;
       }
      case 1:{
        cout << "Your subscription will expire within a Day. Renew now and save 20%!" << endl;
        break;
      }
      case 2: case 3: case 4: case 5: {
        cout << "Your subscription will expire in " << subscription << " days. Renew now and save 10%!" << endl;
       break;
      }
      case 6: case 7: case 8: case 9: case 10:{
      cout << "Your subscription will expire soon" << endl;
      break;
      }
      default:{cout << "You have an active subscription..." << endl;}
        }
    return 0;

}