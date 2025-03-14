//
// Created by Balazsoficial on 2025. 03. 14..
//
#include<iostream>
#include<random>
#include<windows.h>
using namespace std;
int main(){
    srand(time(0));
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    int random;
      while(true)
        {
          SetConsoleTextAttribute(consoleHandle, 2);
       random =rand()%106;
     random+=19;
    char out=static_cast<char>(random);
        cout << out;}

}