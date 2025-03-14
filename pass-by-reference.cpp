//
// Created by Balazsoficial on 2025. 03. 14..
//
#include <iostream>
using namespace std;
void age_print(int& age);
int main(){
    int age =23;
    cout << "The age  before the function is " << age << " years old!\n";
    cout << "&-of age:" << &age << "\n";
    age_print(age);
    cout << "The age  after the function is " << age << " years old!\n";
    cout << "&-of age:" << &age << "\n";


}
void age_print(int& age){
    ++age;
    cout << "You are " << age << " years old!\n";
    cout << "&-of age:" << &age << "\n";
}