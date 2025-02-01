//
// Created by Balazsoficial on 2025. 02. 01..
//
#include <iostream>
using namespace std;
int main(){
  //addition
  int num1 = 7;
  int num2 = 2;

  int result = num1 + num2;
  cout <<"Result: "<< result << endl; //9
  //subtraction
  result = num1 - num2;
  cout <<"Result: "<< result << endl; //5
  result = num2 - num1;
  cout <<"Result: "<< result << endl; //-5
  //Multiplication
  result = num1 * num2;
  cout <<"Result: "<< result << endl;  //14
  //division
  result = num1 / num2;
  cout <<"Result: "<< result << endl;  //3
  // modulus
  result = num1 % num2;
  cout <<"Result: "<< result << endl; //1

  return 0;
}