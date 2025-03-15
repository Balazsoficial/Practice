//
// Created by Balazsoficial on 2025. 03. 15..
//
#include <iostream>
using namespace std;
int sum(int num1, int num2);
int main() {
  //compiler sometimes optimizes the code to return by reference for example when concatenating  strings with a function
  int a= 34;
  int b = 5;
  int result = sum(a, b);
  cout << "Sum of " << a <<" and " << b << " is " << result << endl;

}
int sum(int num1, int num2) {
  int result;
  result = num1 + num2;
  return result;
}