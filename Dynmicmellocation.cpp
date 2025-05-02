#include <iostream>
using namespace std;
int main (){

int Num_Of_Elments;
int* DynamicElements = nullptr;

// print on the screen what the user want
cout <<"How many numbers would like to type"<< endl;
cin>> Num_Of_Elments;

// intialising to user input

DynamicElements = new int[Num_Of_Elments];

if(DynamicElements == nullptr){
    cout<<"Error the memory could no be allocated"<< endl;

}else 
{
    for(int i = 0; i < Num_Of_Elments; i++){
        cout <<"Enter number"<< endl;
       cin>> DynamicElements[i];
    }
    cout<<"you have entered " <<endl;

    for(int j  = 0; j < Num_Of_Elments; j++){
        cout<< DynamicElements[j] <<", ";
    }
    delete[] DynamicElements;
}

    return 0;
}