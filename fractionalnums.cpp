//
// Created by Balazsoficial on 2025. 01. 31..
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  float num1 {1.1234567890f};  //precison :7
  double num2 {1.1234567890123456789};  //precision 15
  long double num3 {1.12345678901234567890L};  //more than double
  cout <<"sizeof(float) = " << sizeof(float) << endl;
  cout <<"sizeof(double) = " << sizeof(double) << endl;
  cout <<"sizeof(long double) = " << sizeof(long double) << endl;
    cout << setprecision(20);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    double num4 {0.00000000003498};
     double num5 {3.498e-10};
    cout << "num4 = " << num4 << endl;
    cout << "num5 = " << num5 << endl;
    // infinity & NaN
    double num6 {5.6};
    double num7 {};
    double num8 {};
    // inf can be +/-
    double result { num6/num7 };
    cout << "num/0 = " << result << endl;
    cout << "inf+num = " << result + num6 << endl;
    //Nan
    cout << "0/0:  " << num7/num8 << endl;

    return 0;
}