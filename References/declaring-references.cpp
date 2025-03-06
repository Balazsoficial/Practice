//
// Created by Balazsoficial on 2025. 03. 05..
//
#include <iostream>
using namespace std;
void test(int& ref_int_data);
int main(){
    int int_data =33;
    double double_data = 44;

    //references
    int& ref_int_data = int_data;
    double& ref_double_data = double_data;

    cout << "int_data = " << int_data << endl;
    cout << "&int_data = " << &int_data << endl;
    cout << "double_data = " << double_data << endl;
    cout << "&double_data = " << &double_data << endl;

    cout << "ref_int_data = " << ref_int_data << endl;
    cout << "&ref_int_data = " << &ref_int_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "&ref_double_data = " << &ref_double_data << endl;

    int_data = 1231;
    double_data = 123412;
    cout <<endl;
    cout << "int_data = " << int_data << endl;
    cout << "&int_data = " << &int_data << endl;
    cout << "double_data = " << double_data << endl;
    cout << "&double_data = " << &double_data << endl;

    cout << "ref_int_data = " << ref_int_data << endl;
    cout << "&ref_int_data = " << &ref_int_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "&ref_double_data = " << &ref_double_data << endl;

    ref_int_data = 11654;
    ref_double_data = 1234.56;
    cout <<endl;
    cout << "int_data = " << int_data << endl;
    cout << "&int_data = " << &int_data << endl;
    cout << "double_data = " << double_data << endl;
    cout << "&double_data = " << &double_data << endl;

    cout << "ref_int_data = " << ref_int_data << endl;
    cout << "&ref_int_data = " << &ref_int_data << endl;
    cout << "ref_double_data = " << ref_double_data << endl;
    cout << "&ref_double_data = " << &ref_double_data << endl;
    test(ref_int_data);
    cout <<endl;
    cout << "int_data = " << int_data << endl;


}
void test(int& ref_int_data) {

    ref_int_data =31;


}