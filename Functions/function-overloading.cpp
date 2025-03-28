//
// Created by Balazsoficial on 2025. 03. 15..
//
#include <iostream>
using namespace std;
int max(int a,int b);
double max(double a, double b);
string max(string a, string b);
int main() {
    //the compiler will decide which function to choose by the types
    cout <<"max(1,53)   " << max(1,53) << endl;
    cout << "max(3.1415,2.7182)   " << max(3.1415,2.7182)<<endl;
    cout << "max(cat,chat)   " << max("cat","chat") << endl;
}
int max(int a, int b) {
    cout << "Int overload called   "  ;
    return a > b ? a : b;
}
double max(double a, double b) {
    cout << "Double overload called   "  ;
    return a > b ? a : b;
}
string max(string a, string b) {
    cout << "String overload called   "  ;
    return a > b ? a : b;
    //the compiler might try to optimize to return by reference clion warns
}