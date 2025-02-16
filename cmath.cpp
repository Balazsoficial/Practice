//
// Created by Balazsoficial on 2025. 02. 16..
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double weigth = 7.7;
    //floor
    cout << "Weigth rounded to the floor is : " << floor(weigth);
    cout << endl;

    //ceil
    cout << "Weight rounded to the ceil is : " << ceil(weigth) << endl;

    //abs
    double money = -5000;
    cout << "Abs of money is : " << abs(money) << endl;
    cout << "Abs of weigth is : " << abs(weigth) << endl;

    //exp
    double exponential = exp(10);
    cout << "Exponent of 10 is : " << exponential << endl;

    //pow

    cout << " 2 ^ 3 is : " << pow(2,3) << endl;
    cout <<  "4 ^ 3 is : " << pow(4,3) << endl;

    //log
    cout<< "log10 of 10000 is : " << log10(10000) << endl;
    cout << "log of 54.59 is : " << log(54.59) << endl;

    //sqrt
    cout << "squer root of 2 is : " << sqrt(2) << endl;

    //round

    cout << "2.5 rounded to : " << round(2.5) << endl;
    cout << "2.45 rounded to : " << round(2.4) << endl;

}