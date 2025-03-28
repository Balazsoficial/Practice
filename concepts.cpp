//
// Created by Balazsoficial on 2025. 03. 28..
//
#include <iostream>
#include <concepts>
using namespace std;
template<typename T>
requires std::integral<T> T add (T a, T b) {  //template <std::integral T> ... is also a valid syntax
    return a + b;
}
auto add2(integral auto a, integral auto b) {
    return a + b;
}
int main() {
    char a2 ='10';
    char b2 ='40';
    int a0 =10;
    int b0 =20;
    double a1 =3.1235;
    double b1 =1.5625;

    cout << add(a0,b0) << endl;
    cout << static_cast<int>(add(a2,b2)) << endl;
    //cout << add(a1,b1) << endl; //Substitution failed due to constraints: double does not satisfy concept integral, because requirement is_integral_v<double> is not satisfied


    cout << add2(a0,b0) << endl;
    cout << add2(a2,b2) << endl;
    //cout << add2(a1,b1) << endl; same as before




}