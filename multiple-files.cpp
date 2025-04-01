//
// Created by Balazsoficial on 2025. 04. 01..
//
#include <iostream>
#include "cylinder.cpp"

using namespace std;

int main() {
    Cylinder cylinder1(10,4);
    cout <<"volume: " <<  cylinder1.volume() << endl;
    Cylinder cylinder2;
    cout <<"volume: " <<  cylinder2.volume() << endl;
    cout << "Height of the cylinder: " <<  cylinder2.get_base_height() << endl;
    //modify the object
    cout <<"Modifying stuff with setters.... "<< endl;
    cylinder2.set_base_height(50);
    cylinder2.set_base_radius(10);
    cout <<"volume: " <<  cylinder2.volume() << endl;





}
