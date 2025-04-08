//
// Created by Balazsoficial on 2025. 03. 30..
//
#include <iostream>
#include <cmath>
using namespace std;
const double pi = numbers::pi;
class Cylinder {
public:
  //constructors
  Cylinder() {
    base_radius = 2;
    base_height = 2;
  }
  Cylinder(double rad_param,double height_param) {        //can pass numbers to construct the object
    base_radius = rad_param;
    base_height = height_param;
  }
  //functions methods
    double volume() {
        return pi*base_radius*base_radius*base_height;
    }
    private:    //this can not be accsesed from outside  the class
    double base_radius{};
    double base_height{};
};
int main() {
    Cylinder cylinder1(10,4);
    cout <<"volume: " <<  cylinder1.volume() << endl;
    Cylinder cylinder2;
    cout <<"volume: " <<  cylinder2.volume() << endl;





}
