//
// Created by Balazsoficial on 2025. 02. 16..
//
#include <iostream>
using namespace std;
int main() {

     short var1 =10;
     short var2 = 20;

     char var3 = 40;
     char var4 = 50;

     cout << "sizeof(var1) = " << sizeof(var1) << endl;
     cout << "sizeof(var2) = " << sizeof(var2) << endl;
     cout << "sizeof(var3) = " << sizeof(var3) << endl;
     cout << "sizeof(var4) = " << sizeof(var4) << endl;

     auto result1 = var1 + var2;
     auto result2 = var3 + var4;

     cout << "sizeof(result1) = " << sizeof(result1) << endl;
     cout << "sizeof(result2) = " << sizeof(result2) << endl;



}