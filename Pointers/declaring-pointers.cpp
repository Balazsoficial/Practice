//
// Created by Balazsoficial on 2025. 03. 01..
//
#include <iostream>
using namespace std;
int main (){
    //declare pointer
    int *p_number =nullptr;  //initialized with nullptr
    double *p_fraction = nullptr;

    //size of pointers are always the same
    cout << "Sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(int*): " << sizeof(int*) << endl;
    cout << "sizeof(double*): " << sizeof(double*) << endl;
    cout << "Sizeof(p_number): " << sizeof(p_number) << endl;
    cout << "Sizeof(p_fraction): " << sizeof(p_fraction) << endl;

    //assigning data that can only be the same type like int int

    int asd=43;
    int *p_asd = &asd;
    cout << "The content of asd: " << asd << endl;
    cout << "The position of asd in the memory " << p_asd << endl;


    int asd1 =12356765;
    int *p_asd1 = &asd1;
    cout << "The value of asd1 is: " << *p_asd1 << endl;

}