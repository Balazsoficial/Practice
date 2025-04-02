//
// Created by Balazsoficial on 2025. 04. 02..
//
#include<iostream>
class Dog {
    public:

    Dog(std::string_view name_param,std::string_view breed_param, int age_param);
    ~Dog();

    private:
    std::string name;
    std::string breed;
    int * p_age{nullptr};


};
Dog:: Dog(std::string_view name_param,std::string_view breed_param, int age_param) {
    name=name_param;
    breed=breed_param;
    p_age=new int;
    *p_age=age_param;
    std::cout <<"Dog constructor called for : "<< name<<std::endl;
}
Dog::~Dog() {
    delete p_age;
    std::cout <<"Dog destructor called for : "<< name<<std::endl;
}
void something() {
    Dog my_dog("Dawg","sheperd",2);
}

int main() {
    something();
    std::cout << "done"<<std::endl;
    return 0;
//releasing pointer class objects also calls the destructor

}