//
// Created by Balazsoficial on 2025. 03. 28..
//
#include <iostream>
#include <concepts>
using namespace std;
//compound requirement
template <typename  T>
concept Addable =requires(T a,T b)
{
    {a+b} -> convertible_to<int>;
};

//nested requirements
template <typename T>
concept TinyType =requires(T t)
{
    sizeof(T) <=4; //only enforces syntax
    requires sizeof(T) <=4; //this checks if is it satisfied (nested requirement)
};
auto add(Addable auto a, Addable auto b) {
    return a + b;
}
int main() {

    char x =57;
    char y =63;
    cout << add(x, y) << endl;


}