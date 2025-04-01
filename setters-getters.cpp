//
// Created by Balazsoficial on 2025. 04. 01..
//
#include <iostream>
#include <cmath>
using namespace std;
constexpr double pi = numbers::pi;
class Cylinder {

public:  //Setters and getters must be public else would be no use for them
        //Getters
        double get_base_height() {
            return base_height;
        }
        double get_base_radius() {
            return base_radius;
        }
        //Setters
        void set_base_radius(double r) {
            base_radius = r;
        }
        void set_base_height(double h) {
            base_height = h;
        }
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
    cout << "Height of the cylinder: " <<  cylinder2.get_base_height() << endl;
    //modify the object
    cout <<"Modifying stuff with setters.... "<< endl;
    cylinder2.set_base_height(50);
    cylinder2.set_base_radius(10);
    cout <<"volume: " <<  cylinder2.volume() << endl;





}
