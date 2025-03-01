//
// Created by Balazsoficial on 2025. 03. 01...
//
#include <iostream>
using namespace std;
int main() {
    //this needs a null terminator so that c++ knows that the array ended
    char message1[] = {'H','e','l','l','o','\0'};
    //string literal this adds null terminator to the end
  char message[]  {"Hello World!"};
  cout << "Message is: " << message << endl;
    cout << message1 << endl;

  //changing letters
  message[1] ='a';
  //can be printed using a range loop
  for (auto i :message)
    //it adds a null  character to the end
    cout << i ;

    //not that you cant use cout statement with a number array you will get memory adress like 0x61fd90
}