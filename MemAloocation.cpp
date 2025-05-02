#include <iostream>

using namespace std;
int main (){

    int numberOfElements = 0;
    int* dynamicArray = nullptr; 
    
    
    cout <<"how many numbers whould you like  to type?";
    cin>>numberOfElements;

    dynamicArray  = new int[numberOfElements];

    if(dynamicArray == nullptr){
        cout <<"Error: memory could not be allocated";

    }else{

        for ( int i =0; i < numberOfElements; i++){
            cout<<"Enter number: ";
            cin >>dynamicArray[i];
        }

        cout <<"you haved entered";
        
        for ( int j =0; j < numberOfElements; j++){
           cout<<"Enter number: ";
        }
        delete[] dynamicArray;
    }

    return 0;
}