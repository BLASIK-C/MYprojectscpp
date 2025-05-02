#include <fstream>
#include <iostream>

using namespace std;

int main (){
    char data[100];

    //open a text file in whrite mode.
    ofstream outfile;
    outfile.open("afile.txt");
    cout <<"writing to the file" << endl;
    cout <<"Enter your name" << endl;

    cin.getline(data, 100);

    // write the imported data to the text file
    outfile<< data<< endl;

    cout <<"Enter your age" << endl;
    cin >> data;
    cin.ignore();

    // again inputted dta into the text file.
    outfile<< data << endl;
    // close the opened file
    outfile.close();


    // open the file in the read mode.
    ifstream infile;
    infile.open("afile.txt");

    cout << "Reading from the file" << endl;

    infile >> data;

    // write  the data to the screen.
    cout<<data<< endl;

    // again read the data from the file and display i.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();
    return 0;
}
