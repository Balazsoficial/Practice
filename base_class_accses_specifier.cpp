//
// Created by Balazsoficial on 2025. 08. 02..
//
#include <iostream>
using namespace std;
class Person{
public:
    int something;

private:
    string st;
};
class Player : protected Person {
public:
    void SetSomething(int s) { //whit protected inheritence i can still change the value of something
        something=s;
    }
    int age;

};
//private>protected>public

int main() {
    Player p;
    p.something =1; // when inheritance is private or protected, this member is inaccessible only when is public becomes accessible





}
