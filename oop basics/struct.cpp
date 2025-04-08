//
// Created by Balazsoficial on 2025. 04. 06..
//
#include<iostream>
//they are classes with public classes by default and you dont want to use them with  functions
struct Dog {
    std::string m_name;
    };
class Cat {
        std::string m_name;
    };
struct Point {
    double x;
    double y;

};
void print_point(Point point) {
    std::cout <<"[X: " <<point.x <<" Y: " <<point.y <<"]"<<std::endl;
}
int main() {
    Dog dog1;
    Cat cat1;
    dog1.m_name = "Dog";
    //cat1.m_name = "Cat";  //members are private by default ->error

    Point point1;
    point1.x = 51.9;
    point1.y = 23.1;
    print_point(point1);


}
