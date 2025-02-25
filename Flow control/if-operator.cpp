//
// Created by Balazsoficial on 2025. 02. 16..
//
#include <iostream>
using namespace std;
int main() {
    int number1 = 55;
    int number2 = 60;

    bool result = number1 < number2;
    cout << boolalpha <<"result: "<< result << endl;

    if (result == true) {
      cout << number1 << " is less than " << number2 << endl;
    }

    if(!result==true) {
      cout << number1 << " is not less than " << number2 << endl;
    }

    // with else
    if (result == true) {
      cout << number1 << " is less than " << number2 << endl;
    }
    else
      cout << number1 << " is not less than " << number2 << endl;

  //nested
  bool red = true;
  bool green = false;
  bool stop =true;

  if (red && stop == true) {
    cout << "stop" << endl;
  }
  else {
    cout << "go" << endl;
  }


}