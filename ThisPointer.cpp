//
// Created by Balazsoficial on 2025. 04. 03..
//
#include<iostream>
class Dog {
public:

    Dog(std::string_view name_param,std::string_view breed_param, int age_param);
    ~Dog();
    void print_info() {
        std::cout <<"Dog( " <<this <<" Name: " <<name<<" breed: " <<breed<< " age: "<<*p_age<<" )"<<std::endl;
    }

    //setter
    Dog * set_dog_name(std::string_view name) {
        this->name = name;
        return this;
        //name=name;//does nothng
    }
    Dog* set_dog_breed(std::string_view breed) {
        this->breed = breed;
        return this;
    }
    Dog* set_dog_age(int age) {
       *(this-> p_age) = age;

        return this;
    }

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
    std::cout <<"Dog constructor called for : "<< name<< " at: " << this<<std::endl;
}
Dog::~Dog() {
    delete p_age;
    std::cout <<"Dog destructor called for : "<< name<<std::endl;
}
int main() {
    Dog my_dog("Dawg","shepherd",2);
    my_dog.print_info();
    my_dog.set_dog_name("Fluffy")->set_dog_breed("black")->set_dog_age(12);
    my_dog.print_info();

    return 0;
    //first in last out mechanism

}