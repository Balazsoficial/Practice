//
// Created by Balazsoficial on 2025. 04. 03..
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
int main() {
    Dog my_dog1("Dawg1","shepherd",2);
    Dog my_dog2("Dawg2","shepherd",2);
    Dog my_dog3("Dawg3","shepherd",2);
    Dog my_dog4("Dawg4","shepherd",2);
    std::cout << "Destruction timeee! "<<std::endl;
    return 0;
    //first in last out mechanism

}