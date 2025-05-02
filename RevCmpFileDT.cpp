#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int countVowels(string s) {
    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}


int countWords(string s) {
    int words = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') words++;
    }
    return words + 1; 
}


string reverse(string s) {
    string r;
    for(int i = s.length()-1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}


string capitalize(string s) {
    bool newWord = true;
    int pos = 0;
    
    for(int i = 0; i < s.length(); i++) {
        if(newWord) {
            pos = 0;
            newWord = false;
        }
        
        if(isalpha(s[i])) {
            pos++;
            if(pos == 2) s[i] = toupper(s[i]);
        }
        else if(s[i] == ' ') {
            newWord = true;
        }
    }
    return s;
}

int main() {
   
    ofstream out("textfile.txt");
    out << "This is the Advanced Computer Programming Module";
    out.close();

  
    ifstream in("textfile.txt");
    string fileData;
    getline(in, fileData);
    in.close();

    cout << "Original: " << fileData << endl;
    cout << "Vowels: " << countVowels(fileData) << endl;
    cout << "Words: " << countWords(fileData) << endl;
    cout << "Reversed: " << reverse(fileData) << endl;
    cout << "Capitalized: " << capitalize(fileData) << endl;

    return 0;
}