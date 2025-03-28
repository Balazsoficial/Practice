//
// Created by Balazsoficial on 2025. 03. 12..
//
#include <iostream>
using namespace std;
void say_age(int age);
//This program demonstrates that functions create a copy of a variable and not manipulates the original one
int main(){
  int age =23; //local
  cout << "The age before call is: " << age << " years old!\n";
  cout << "&age = " << &age << "\n";
  say_age(age); //argument
  cout << "The age after call is: " << age << " years old!\n";
  cout << "&age = " << &age << "\n";


  }
  void say_age(int age){
    age++;
    cout << "The age is now (inside the functions with++): " << age << " years old!\n";
     cout << "&age = " << &age << "\n";
  }