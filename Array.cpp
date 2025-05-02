#include <iostream>
using namespace std;

int main (){
    string coluors[8] = {"B123","C234","A345","C15","B177","G3003", "C235","B179"};
for(int i = 0; i<8; i++){
    if (coluors[i][0] == 'B'){
        cout<<coluors[i]<< endl;
    }
}
    return 0;
}