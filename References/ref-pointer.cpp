//
// Created by Balazsoficial on 2025. 03. 06..
//
#include<iostream>
using namespace std;
//we can think of referenecs as a const pointer but with no need to dereference at printig and getting the value
int main (){
    double double_data = 3.14;
    double& ref_double_data = double_data;
    double* p_double_data = &double_data;

    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "p_double_data = " << *p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;

    //writing through pointer
    *p_double_data = 42;

    cout << endl;
    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "p_double_data = " << p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;

   //writing through refernce
    ref_double_data = 56;

    cout << endl;
    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "p_double_data = " << p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;
    double other_double_data = 3.1123;
    ref_double_data = other_double_data;
    cout << endl;
    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "p_double_data = " << p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;

    p_double_data = &other_double_data;
    cout << endl;
    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "&of double data" << &double_data << endl;
    cout << "&ref double data" << &ref_double_data << endl;
    cout << "p_double_data = " << p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;
    *p_double_data = 123.653;
    cout << endl;
    cout << "double_data = " << double_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "&of double data " << &double_data << endl;
    cout << "&ref double data " << &ref_double_data << endl;
    cout << "p_double_data = " << p_double_data << endl;
    cout << "*p_double_data = " << *p_double_data << endl;


}