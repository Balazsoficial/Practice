//
// Created by Balazsoficial on 2025. 03. 04..
//
#include <iostream>
using namespace std;
int main(){
      int * p_test {}; //initialized as a nullptr
    p_test = new int(8);
      cout << "Verbose nullptr check" << endl;

      if (p_test)  // we can also use p_test ==nullptr
        {
        cout << "p_test points to a valid location: " << p_test << endl;
          cout << "p_test: " << *p_test << endl;
        }
        else
          cout <<"p_test i not pointing to a valid location" << endl;

  delete p_test;
  p_test = nullptr;




  }