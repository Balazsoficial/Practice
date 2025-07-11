//
// Created by Balazsoficial on 2025. 07. 10..
//
#include <iostream>

using namespace std;

bool Length_check(string input) {
    if (input.length() >= 8 && input.length()<=16) {
        return true;
    }
    else{return false;}


}
bool Lower_check(string input) {
    bool rt=false;
    for (auto c : input) {
        if (c==tolower(c)) {
            rt=true;
        }
    }
    return rt;

}
bool Upper_check(string input) {
    bool rt=false;
    for (auto c : input) {
        if (c==toupper(c)) {
            rt=true;
        }
    }
   return rt;
}
bool Main_check(string input) {
    if (Length_check(input) && Lower_check(input) && Upper_check(input)) {
        return true;
    }
    else{return false;}
}

int main() {
    while (1==1){        string password;
        cin >> password;
        if (Main_check(password)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }}





}
