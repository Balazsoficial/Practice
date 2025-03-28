//
// Created by Balazsoficial on 2025. 03. 19..
//
#include <iostream>
using namespace std;
//compiler is going to do replacement
//you must pass 2 of the same type
//does not work with pointers since we would need to dereference them for the value and dereferencing does not work on other stuff
template<typename T> T maximum(T a, T b);
int main(){

  int a = 10;
  int b = 20;

  double c= 3.14;
  double d = 3.1523;

  string s = "Hello World!";
  string z = "Yello World!";


  cout << "Max ints:  " << maximum(a,b) << endl;
  cout << "Max doubles:  " << maximum(c,d) << endl;
  cout << "Max string:  " << maximum(s,z) << endl;




}
template<typename T> T maximum(T a, T b){

  return (a > b) ? a : b;

}