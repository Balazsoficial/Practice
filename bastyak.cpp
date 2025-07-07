//
// Created by Balazsoficial on 2025. 05. 12..
//
#include <iostream>

using namespace std;
int db=0;
int sor[8];
int bastya=9;
void backtrack(int szint);
int main() {

    for (int i=0; i<=size(sor);i++) {
        sor[i]=0;
    }
    backtrack(1);
    cout << db<< endl;
    return 0;

}
void backtrack(int szint) {
    if (bastya==szint) {
        db++;
        for (int i=1; i<=8; i++) {
            cout << sor[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i=1; i<=8;i++) {
            if (sor[i]==0) {
                sor[i]=szint;
                backtrack(szint+1);
                sor[i] =0;
            }

        }

    }

}