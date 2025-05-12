//
// Created by Balazsoficial on 2025. 05. 12..
//
#include <iostream>
using namespace std;
int sorrend [110];
int szamlalo =0;
int hatar;
void backtracking (int szint);
int main() {
    hatar =6;
    for (int i= 0; i<11; i++) {
        sorrend[i] = 0;
    }
    sorrend[1] = 1;
    backtracking (2);



}
void backtracking (int szint) {
    int i;
    if (szint ==hatar+1) {
        szamlalo++;
        cout << szamlalo <<". ";
        for (int j=1;j<=hatar;j++) {

            cout << sorrend[j] ;
        }
        cout << endl;
    }
    else{
        for (i=1; i<=hatar;i++) {
        if (sorrend[i] == 0) {
            sorrend[i] = szint;
            backtracking (szint+1);
            sorrend[i] = 0;
        }

    }}




}