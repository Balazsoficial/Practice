//
// Created by Balazsoficial on 2025. 03. 15..
//
#include <iostream>
using namespace std;
int main(){
         double a=10;
    //capture by value (it creates a copy to the memory)
         auto func =[a](){
           cout << "a=" << a << endl;
             cout <<"&of inner a: " <<&a << endl;
         };
         for(size_t i=0;i<5;i++)
           {
           a++;
             cout <<"&of outer a: " <<&a << endl;
         func();
        }


    //capture by reference
    cout << endl;
    cout <<"Capture by refernec" << endl;
    double b=20;
    //capture by reference (inner value references outer value, same address)
    auto func1 =[&b](){
        cout << "a=" << b << endl;
        cout <<"&of inner a: " <<&b << endl;
    };
    for(size_t i=0;i<5;i++)
    {
        b++;
        cout <<"&of outer a: " <<&b << endl;
        func1();
    }

}