//
// Created by Balazsoficial on 2025. 03. 01..
//
#include <iostream>
using namespace std;
int main() {
        //dynamic heap memory
        int * p_number1 = new int {32};


        cout << "Dynamically allocating memory : " <<endl;
        cout << "*p_number1 = " << *p_number1 << endl;

        //releasing memory
        delete p_number1;
        p_number1 =nullptr;
        //you can reuse pointers
        p_number1 = new int {54123};
        cout << "Reused pointer : " << *p_number1 << endl;
        delete p_number1;
        p_number1 =nullptr;
}