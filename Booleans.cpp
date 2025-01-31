//
// Created by Balazsoficial on 2025. 01. 31..
//
#include <iostream>
using namespace std;
int main() {
  bool redlight {true};
  bool green {false};
  if (redlight)
    {
    cout << "stop" << endl;
    }
    else
      {
      cout <<"go" << endl;
      }
      cout << "sizeof(redlight)  "<< sizeof(redlight)<< endl;

      //wo boolalpha
      cout <<"Red: "<< redlight << endl;
      cout <<"Gren: "<< green << endl;

          //w boolalpha
          cout << boolalpha;
  cout <<"Red: "<< redlight << endl;
  cout <<"Gren: "<< green << endl;

  return 0;
}