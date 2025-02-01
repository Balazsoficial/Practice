//
// Created by Balazsoficial on 2025. 02. 01..
//
#include <iostream>
using namespace std;
int main(){
    //postfix
    int val =5;
    val++;
    cout << "the value of val is after incrementing with ++ is: " << val << endl;
    val = 5;
    val--;
    cout << "the value of val is after decrementing with -- is: " << val << endl;
    cout<<"===============\n";
    val = 5;
    //prefix
    ++val;
    cout << "the value of val is after incrementing with ++ is: " << val << endl;
    val = 5;
    --val;
    cout << "the value of val is after decrementing with -- is: " << val << endl;





    return 0;
}