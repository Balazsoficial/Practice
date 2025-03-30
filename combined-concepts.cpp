//
// Created by Balazsoficial on 2025. 03. 30..
//
#include <iostream>
#include <concepts>
using namespace std;
template <typename T>
concept Multipliable = requires(T a,T b)
{
    a*b;
};

template<typename T>
concept MyIntegral = is_integral_v<T>; //typename lib can be used
template<typename T>
requires  Multipliable<T> &&  MyIntegral<T> T add (T a, T b) {  //||(or) and &&(and) operators can be used
    return a + b;  //does not check for value just for valid syntax
}

int main() {
    string a2 ="52";
    string b2 ="54";
    int a0 =10;
    int b0 =20;
    double a1 =3.1235;
    double b1 =1.5625;

    cout << add(a0,b0) << endl;
    // cout << add(a2,b2) << endl; //Substitution failed due to constraints: string does not satisfy concept Multipliable, because requires(string a, string b) {...} is false, because expression a * b is ill-formed
    cout << add(a1,b1) << endl; //does not satisfy the is integral check



}