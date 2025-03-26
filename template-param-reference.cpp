//
// Created by Balazsoficial on 2025. 03. 26..
//
#include <iostream>
using namespace std;
template <typename T> T& max(T& a,T& b);
int main()
{
       double a=45.2;
       double b=4553.2;
       cout << "& of a and b outside are: " <<&a<< "    "<<&b << endl;//passed by reference
       cout << max(a,b) << endl;




}
template <typename T> T& max(T& a,T& b){
    cout << "& of a and b inside are: " <<&a<< "    "<<&b << endl;
    return (a > b) ? a : b;
}