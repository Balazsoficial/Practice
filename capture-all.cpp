//
// Created by Balazsoficial on 2025. 03. 16..
//
#include <iostream>
using namespace std;
int main(){
    int c =42;
    int d=5;
        //capture all by value
    auto func =[=]() {
        cout << "Inner value: " << c << endl;
    };

    for (size_t i{};i<5;i++) {
        cout << "Outer value: " << c << endl;
        func();
        ++c;
    }
    cout << endl;
    //capture all by reference
    auto func1 =[&]() {
        cout << "Inner value: " << c << endl;
        cout << "D: " << d << endl;
    };

    for (size_t i{};i<5;i++) {
        cout << "Outer value: " << c << endl;
        func1();
        ++c;
    }


}