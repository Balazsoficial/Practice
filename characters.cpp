//
// Created by Balazsoficial on 2025. 02. 01..
//
#include <iostream>
using namespace std;
int main()
    {
        char ch1 {'a'};
        char ch2 {'r'};
        char ch3 {'r'};
        char ch4 {'o'};
        char ch5 {'w'};
        cout << ch1 << endl;
        cout << ch2 << endl;
        cout << ch3 << endl;
        cout << ch4 << endl;
        cout << ch5 << endl;
        char value = 65;
        cout << "sizeof(char) = " << sizeof(char) << endl;
        cout << value ;
        cout << "  value(int) = " << static_cast<int>(value) << endl;




  return 0;
    }