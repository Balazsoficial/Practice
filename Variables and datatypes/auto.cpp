//
// Created by Balazsoficial on 2025. 02. 01..
//
#include <iostream>
using namespace std;
int main() {
    auto var1 = 12;
    auto var2 = 5.0;
    auto var3 = 14.0f;
    auto var4 =15.0l;
    auto var5 = 'e';
    auto var6 = 12u;
    auto var7 = 13ul;
    auto var8 = 15ull;
    cout << "var1 occupies: " << sizeof(var1) <<" bytes"<< endl;
    cout << "var2 occupies: " << sizeof(var2) <<" bytes"<< endl;
    cout << "var3 occupies: " << sizeof(var3) <<" bytes"<< endl;
    cout << "var4 occupies: " << sizeof(var4) <<" bytes"<< endl;
    cout << "var5 occupies: " << sizeof(var5) <<" bytes"<< endl;
    cout << "var6 occupies: " << sizeof(var6) <<" bytes"<< endl;
    cout << "var7 occupies: " << sizeof(var7) <<" bytes"<< endl;
    cout << "var8 occupies: " << sizeof(var8) <<" bytes"<< endl;




    return 0;
}