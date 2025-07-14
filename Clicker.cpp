//
// Created by Balazsoficial on 2025. 07. 14..
//
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
void Clicker();
void Foe_GBG();
int main() {
string input;
    do {
        cout << "Type \"forge\" for foe GBG autoclicker" << endl;
        cout << "Type \"clicker\" for regular autoclicker " << endl;
        cin >> input;
        if (cin.fail()) {
            cin.clear();
        }
        else {
            transform(input.begin(), input.end(), input.begin(), :: tolower);
            if (input == "forge") {
                Foe_GBG();
            }
            else if (input == "clicker") {
                Clicker();
            }
            else {
                cin.clear();

            }

        }



    } while (!input.empty());


}
void Clicker() {
    boolean exit = false;
    while (!exit) {


        if (GetAsyncKeyState(VK_CAPITAL)) {
                   INPUT inputs[2] = {};

            inputs[0].type = INPUT_MOUSE;
            inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
            inputs[1].type = INPUT_MOUSE;
            inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
            SendInput( ARRAYSIZE(inputs), inputs, sizeof(INPUT));
            _sleep(0);
        }

        if (GetAsyncKeyState(VK_LCONTROL) && GetAsyncKeyState(VK_F3)) {
            exit = true;
        }

        if (GetAsyncKeyState(VK_RCONTROL) && GetAsyncKeyState(VK_F8)) {
            _exit(0);
        }

    }


}
void Foe_GBG() {

}

