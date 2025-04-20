//
// Created by Balazsoficial on 2025. 04. 10..
//
#include <iostream>
using namespace std;
class Person {
    friend std::ostream& operator<<(std::ostream& out, const Person& person) {
        out <<"Person["<<person.first_name<<","<<person.last_name<<"]";
        return out;
    }
public:
    Person() =default;
    Person(string& first_name_param,string& last_name_param) {
        this->last_name=last_name_param;
        this->first_name=first_name_param;

    }
    ~Person()=default;

    //Getters
    string get_first_name() const{
        return first_name;
    }
    string get_last_name() const{
        return last_name;
    }
    void set_first_name(string_view fn) {
        this->first_name=fn;
    }
    void set_last_name(string_view ln) {
        this->last_name=ln;
    }
private:
    string first_name ="Mysterious";
    string last_name ="Person";
};
class Player :public Person {
    friend std::ostream& operator<<(std::ostream& out, const Player& player) {
        out <<"Player["<<player.get_first_name()<<" "<<player.get_last_name()<<", Game: "<<player.m_game<<"]";
        return out;
    }
public:
    Player()=default;
    Player(string_view game_param) {
        this->m_game=game_param;
    }
    ~Player()=default;

    private:
    string m_game="None";

};
int main()
    {
    Player player("basketball");
    cout << "player : " << player<< endl;
    player.set_first_name("John");
    player.set_last_name("Pork");
    cout << "player : " << player<< endl;





    }