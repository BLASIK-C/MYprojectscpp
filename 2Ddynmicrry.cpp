#include <iostream>
#include <string>
using namespace std;

int main() {

    int rows, cols;

    do {
        cout << "Enter number of rows (max 3): ";
        cin >> rows;
        if (rows < 1 || rows > 3) {
            cout << "Invalid input! Rows must be between 1 and 3.\n";
        }
    } while (rows < 1 || rows > 3);
    
    do {
        cout << "Enter number of columns (max 3): ";
        cin >> cols;
        if (cols < 1 || cols > 3) {
            cout << "Invalid input! Columns must be between 1 and 3.\n";
        }
    } while (cols < 1 || cols > 3);

    double** array2D = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array2D[i] = new double[cols];
    }

cout << "\nEnter values for the array:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<<"Enter the vale for element. [" << i<<"]["<<j<<"]";
            cin>>array2D[i][j];
        }

    }
    
     cout << "\nArray contents:\n";
     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < cols; j++) {
             cout << array2D[i][j] << "\t";
         }
         cout << endl;
     }
    for(int i = 0; i < rows; i++){
    delete[] array2D[i];
    }
    delete[] array2D;

    return 0;
}