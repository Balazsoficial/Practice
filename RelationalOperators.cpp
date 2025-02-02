//
// Created by Balazsoficial on 2025. 02. 02..
//
#include <iostream>
using namespace std;
int main()
    {
        int number1 = 45;
        int number2 = 60;
        cout << "The value of number1 is " << number1 << endl;
        cout << "The value of number2 is " << number2 << endl<<endl;
        cout << "comparing variables" << endl;
        cout <<boolalpha;
        cout <<"(number1 < number2) " <<(number1 < number2 )<< endl;
        cout << "(number1 <= number2) " <<(number1 <= number2 )<< endl;
        cout << "(number1 > number2) " <<(number1 > number2 )<< endl;
        cout << "(number1 >= number2) " <<(number1 >= number2 )<< endl;
        cout << "(number1 == number2) " <<(number1 == number2 )<< endl;
        cout << "(number1 != number2) " <<(number1 != number2 )<< endl;
        bool result = (number1 > number2);
        cout << "result: "<<result << endl;



    }