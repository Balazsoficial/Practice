//
// Created by Balazsoficial on 2025. 03. 30..
//
#include <iostream>
#include <cmath>
using namespace std;
const double pi = numbers::pi;
class Cylinder {
  //Cylinder(); default constructor created by the compiler
    public:
        double volume() {
            return pi*base_radius*base_radius*base_height;
        }
//private:    //this can not be accsesed from outside  the class
    public:
        double base_radius{};
        double base_height{};
    };
int main() {
    Cylinder cylinder1;

    cout <<"volume: " <<  cylinder1.volume() << endl;
    cylinder1.base_radius = 10;
    cylinder1.base_height = 20;
    cout <<"After change ---->"<<endl;

    cout <<"volume: " <<  cylinder1.volume() << endl;




}
