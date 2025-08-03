//
// Created by Balazsoficial on 2025. 08. 02..
//
#include <iostream>
using namespace std;
class Person{
public:
    int something;
    int add(int a ,int b) {
        return a+b;
    }

private:
    string st;
};
class Player : private Person {
public:
    using Person::something;
   using Person::add;

};
class James : public Player {
public:

    void SetSomethingagain(int s) {
        something =s;  //member is now accsesible publicly even tough it is selfishly inherited
       // using Person::add; //cant resurrect members that are alredy private to upstream classes
    }

};
//private>protected>public

int main() {
    Player p;
    p.something = 1;
    // when inheritance is private or protected, this member is inaccessible only when is public becomes accessible




}
