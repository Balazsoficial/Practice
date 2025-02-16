//
// Created by Balazsoficial on 2025. 02. 03..
//
#include <iostream>
using namespace std;
int main() {
    bool a = true;
    bool b = false;
    bool c = true;

    cout << boolalpha;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << endl;


    //AND

    cout << "a && b = " << (a && b) << endl;
    cout << "a && c = " << (a && c) << endl;
    cout << "a && b && c = " << (a && b && c) << endl;
    cout << endl;


    //OR

    cout << "a || b = " << (a || b) << endl;
    cout << "a || c = " << (a || c) << endl;
    cout << "a || b || c = " << (a || b && c) << endl;
    cout << endl;

    //NOT
    cout << "!a = " << (!a) << endl;
    cout << "!b = " << (!b) << endl;
    cout << "!c = " << (!c) << endl;

}