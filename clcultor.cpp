#include <iostream>
#include <limits>
using namespace std;
int main (){
    int choice;
    while(true){
   cout<<"Welcome to MyApp.com..."<< endl<<endl;
   cout<<"select area of shape to calculate"<< endl;
   cout<<"1. Rectangle"<< endl;
   cout<<"2. Square"<< endl;
   cout<<"3. triangle"<< endl;
   cout<<"4. Exit"<< endl;
   cin>>choice;
       if(choice==1){
        int length;
        int width;
        int Results;
        cout<<"you choose to a calculate Rectangle..."<< endl<<endl;
        cout<<"Enter the size of length"<<endl;
          while(!(cin>>length)){
            cout<<"Invalid input. Please try again"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
          
        cout<<"Enter the size of width"<<endl;
        while(!(cin>>width)){
            cout<<"Invalid input. Please try again"<<endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
        Results = length*width;
        cout<<"According to the sizes you entered, the area is :" <<Results;
    }
    if(choice==2){
      int size;
      int Results;
      cout<<"you choose to a calculate Square..."<< endl<<endl;
      cout<<"Enter the size of length"<<endl;
        while(!(cin>>size)){
          cout<<"Invalid input. Please try again"<<endl;
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
      Results = size*size;
      cout<<"According to the length you entered, the area is :" <<Results;
  }
  if(choice==3){
    double base;
    double height;
    double Results;
    cout<<"you choose to a calculate Rectangle..."<< endl<<endl;
    cout<<"Enter the size of length"<<endl;
      while(!(cin>>base)){
        cout<<"Invalid input. Please try again"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
      
    cout<<"Enter the size of width"<<endl;
    while(!(cin>>height)){
        cout<<"Invalid input. Please try again"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
      }
    Results = 0.5*base*height;
    cout<<"According to the sizes you entered, the area is :" <<Results;
}
if(choice == 4){
  cout<<"Exiting MyApp.com...!:";
  break;
}
}
 return 0;
}

