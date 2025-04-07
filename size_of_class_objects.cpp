//
// Created by Balazsoficial on 2025. 04. 07..
//
#include <iostream>
class Dog {
    public:
    Dog() =default;
    void print_info() {

    }
    private:
    size_t leg_count;   //8
    size_t arm_count;   //8
    int *p_age;         //8
};
int main() {

    std::cout << "sizeof(Dog) = " << sizeof(Dog) << std::endl; //functions aren't accounted for
    std::cout <<"sizeof(size_t) = " << sizeof(size_t) << std::endl;
    std::cout <<"sizeof(int*) = " << sizeof(int*) << std::endl;

}