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
class Player : private Person {
public:
    void SetSomething(int s) { //whit protected inheritance I can still change the value of something
        something=s;
    }
    int GetSomething() {
        return something;
    }
    int age;

};
class James : public Player {
    public:
    void SetSomethingagain(int s) {
        something =s;  //member is inaccessible because private inheritance is selfish
    }

};
//private>protected>public

int main() {
    Player p;
    p.something =1; // when inheritance is private or protected, this member is inaccessible only when is public becomes accessible
    p.GetSomething();
    James j;
    j.SetSomething(1);




}
