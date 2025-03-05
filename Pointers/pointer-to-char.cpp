//
// Created by Balazsoficial on 2025. 03. 01..
//
#include <iostream>

using namespace std;
int main(){

    //important that some compilers won't let you use this syntax if it throws an error just swap to const char
    // it is a problem since the compiler makes the string into const chars and the pointer is not a const char*

     char * message = "Hello World";
    cout << "Message: " << message << endl;
   // *message = 'A'; -> this give an error
    //dereferencing gives the first char
    cout << "Dereferenced pointer: " << *message << endl;

    //allow users to modify the string
    char message1[] = {"Hello World"};
    message1[1] = 'a';
    cout << "Message1: " << message1 << endl;
  return 0;
  }