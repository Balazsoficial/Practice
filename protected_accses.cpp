//
// Created by Balazsoficial on 2025. 04. 20..
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
    /*
    void set_first_name(string_view fn) {
        this->first_name=fn;
    }
    void set_last_name(string_view ln) {
        this->last_name=ln;
    }
    */
protected:
    string first_name ="Tim";
    string last_name ="Cheese";
};
class Player :public Person {
    friend std::ostream& operator<<(std::ostream& out, const Player& player) {
        out <<"Player["<<player.get_first_name()<<" "<<player.get_last_name()<<", Game: "<<player.m_game<<"]";
        return out;
    }
public:
    Player()=default;
    Player(string_view game_param,string_view first_name_param,string_view last_name_param) {
        this->last_name=last_name_param;
        this->first_name=first_name_param;
        this->m_game=game_param;
    }
    ~Player()=default;

private:
    string m_game="None";

};
int main()
{
    Player player("basketball","John","Pork");  //now i can initialize with last and first name param
    cout << "player : " << player<< endl;

}