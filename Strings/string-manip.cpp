//
// Created by Balazsoficial on 2025. 03. 07..
//
#include <iostream>
using namespace std;
int main() {



    cout << "Is C alphanumeric: " << isalnum('C') << endl;
    cout << "Is ^ alphanumeric: " << isalnum('^') << endl;
    cout << "Is 7 alphanumeric: " << isalnum('7') << endl;

    if (isalpha('^')) {
        cout << "^ Is alphanumeric: "  << endl;
    }
    else {
        cout << "^ Is not alphanumeric" << endl;
    }


    cout << "C is alphabetic: " << isalpha('C') << endl;
    cout << "^ Is a alphabetic: " << isalpha('^') << endl;
    cout << "7 Is a letter: " << isalpha('7') << endl;


    //Check if a character is blank
    cout << endl;
    char message[]="Hello World! Patrik is a monkey";
    cout << "Message: " << message << endl;

    size_t blank_count;
    blank_count=0;
    for(int i =0; i<size(message); i++) {
        if(isblank(message[i])) {
            blank_count++;
            cout <<"Blank character at index: " << i << endl;
        }


    }
    cout << "Blank count: " << blank_count << endl;

    //islower , isupper
    for(int i =0; i<size(message); i++) {
      if (islower(message[i])) {
        cout << "low character at index: " << i  << "   " << message[i]<< endl;
      }
      if (isupper(message[i])) {
        cout << "upper character at index: " << i<< "   " << message[i] << endl;
      }
    }
    //toupper, tolower
    char m3[size(message)];
    for (int i =0; i<size(message); i++) {

          m3[i]= toupper(message[i]);

    }
    cout << m3 << endl;


}