//
// Created by Balazsoficial on 2025. 02. 28..
//
#include <iostream>
using namespace std;
int main() {
  const int size = 10;
  size_t i=0;
  //its like while funciton but it will always do the do part and after it will go to the while section and if its true it will get back to the do
  do{
    cout << i << " Hello world" << endl;
  i++;
  }
    while(i < size);

}