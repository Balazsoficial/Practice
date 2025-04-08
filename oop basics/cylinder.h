//
// Created by Balazsoficial on 2025. 04. 01..
//
#ifndef CYLINDER_H
#define CYLINDER_H


class Cylinder {


public:
    //Getters
    double get_base_height();
    double get_base_radius();

    //Setters
    void set_base_radius(double r);
    void set_base_height(double h);

    //constructors
    Cylinder();
    Cylinder(double rad_param,double height_param);
    double volume();

private:    //this can not be accsesed from outside  the class
    double base_radius{};
    double base_height{};
};
#endif