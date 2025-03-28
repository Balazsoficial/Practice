//
// Created by Balazsoficial on 2025. 03. 15..
//
#include<iostream>
using namespace std;


int main() {

    //declare a lambda function and call it directly
    //compiler auto assumes returntype now void
    [](){
        cout << "Hello world"<<endl;
    }();
    //Lambda function that takes parameters
    [](double a,double b)->double {
        cout << ((a<b)? b:a) << endl;
        return a<b?  b : a;
    }(3.14159,2.71828);
    //specified double return type
   auto func1 = [](double a,double b)->double {
        cout << a+b << endl;
        return a+b;
    };
    func1(3.14159,2.71828);
    //compiler does an implicit conversion
    func1(123,125);







}
