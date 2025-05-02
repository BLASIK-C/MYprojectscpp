#include <iostream>
using namespace std;
int main ()
{
    
cout<<"welcome to MyApp.com..."<< endl << endl;
cout<<"Please enter an integer value  between 5 and 6"<< endl;
int value;
if(cin>>value){
if(value > 5 & value < 10){
    cout<<"you input value " << value << " has been accepted" << endl;
}
else {
cout<<"you input value " << value << " is invalid" << endl;
}
}
else{    cout<<"you invalid number.Try again " << endl;}
return 0;
}
