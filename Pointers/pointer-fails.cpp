//
// Created by Balazsoficial on 2025. 03. 03..
//
// times when the new operator fails
#include <iostream>
using namespace std;
int main () {
// you shouldn't make these issues
// we can use std:nothrow
  for (size_t i =0; i<1000000;i++) {
  try{

    int * nums = new int[1000000];
  }__catch(exception& ex){
    cout << "Something went wrong: " << ex.what() << endl;
  }

  }
  cout<< "Program ended well! " << endl;




}
