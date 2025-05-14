//
// Created by Balazsoficial on 2025. 05. 13..
//
#include <iostream>
using namespace std;
int sor[9] ;
int tabla[9][9];
int bastya =0;
int ratlo [9];
int batlo [9];
int oszlop [9];
int szam =0;
void backtracking (int szint);
bool free(int Sor,int Oszlop);
void PrintBoard();
void Reset();
void alloc(int Sor, int Oszlop,int Szint);
int main() {
    Reset();
    backtracking (1);
    cout << szam << endl;





}
void PrintBoard() {
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 9; j++) {
            cout << tabla[i][j] <<'\t' ;
        }

        cout << endl;
    }
    cout << endl;
    //cout << szam << endl; // debug
    szam ++;

}

void backtracking (int szint) {
    if (szint == 9) {
        PrintBoard();
    }
    else {
            for (int j = 1; j <= 8; j++) {
                if (tabla[szint][j]==0 && free(szint,j) )
                {

                    tabla[szint][j] = szint;
                  //  PrintBoard();
                    alloc(szint,j,szint);
                    backtracking (szint+1);
                    sor[szint] = 1844;
                    oszlop[szint] = 1844;
                    ratlo[szint] = 1844;
                    batlo[szint] = 1844;
                    tabla[szint][j] = 0;}
            }




    }

}
bool free(int Sor,int Oszlop) {
    //ratlo
    for (int i = 1; i < 9; i++) {
        if (ratlo[i]==Sor-Oszlop && ratlo[i]!= 1844) {
          //  cout <<"false" << ratlo[i]<< "  "<<i << "  "<< oszlop+sor << "\t";
            return false;
            }
        }
        //batlo
        for (int i = 1; i < 9; i++) {
            if (batlo[i]==Sor+Oszlop&&batlo[i]!=1844) {
                 // cout <<"false" << ratlo[i]<< "  "<<i << "  "<< Oszlop+Sor << "\t";

                return false;
            }
        }
    for (int i = 1; i < 9; i++) {
        if (oszlop[i] == Oszlop ) {
            return false;
        }
    }

    for (int i = 1; i < 9; i++) {
        if (sor[i] == Sor ) {
            return false;
        }
    }




    return true;
}
void Reset() {
    for (int i = 1; i < 9; i++) {
        ratlo[i] = 1844;
    }
    for (int i = 1; i < 9; i++) {
        batlo[i] = 1844;
    }
}
void alloc(int Sor, int Oszlop, int Szint ) {
    sor[Szint] = Sor;
    oszlop[Szint] = Oszlop;
    ratlo[Szint] = Sor-Oszlop;
    batlo[Szint] = Sor+Oszlop;
}