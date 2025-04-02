//
// Created by Balazsoficial on 2025. 04. 01..
//
#include "cylinder.h"
#include <iostream>
using namespace std;
int main() {

    Cylinder c1 = Cylinder(11,20);
    cout << "Volume of c1: " << c1.volume() << endl;
    Cylinder * c3 =&c1; //can initialize like this using another ones adress

    Cylinder *c2 = new Cylinder(12,20);  //creates a heap object
    cout << "Volume of c2: " << c2->volume() << endl;       //can be used instead of dereferencing
    cout << "Volume of c2: " <<(*c2).volume() << endl;   //dereferencing is required
    delete c2;  //release the memory



}