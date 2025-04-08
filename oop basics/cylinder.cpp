//
// Created by Balazsoficial on 2025. 04. 01..
//
#include "cylinder.h"
#include "constants.h"
using namespace std;
    Cylinder::Cylinder(double rad_param,double height_param) {
        base_radius = rad_param;
        base_height = height_param;
    }
    double Cylinder::volume() {
        return pi*base_radius*base_radius*base_height;
    }
    Cylinder::Cylinder(){
        base_radius = 2;
        base_height = 2;
    }
    void Cylinder::set_base_height(double h) {
        base_height = h;
    }
    void Cylinder::set_base_radius(double r) {
        base_height = r;
    }
    double Cylinder::get_base_radius() {
      return base_radius;
    }
    double Cylinder::get_base_height() {
      return base_height;
    }