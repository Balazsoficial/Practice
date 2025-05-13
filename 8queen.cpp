//
// Created by Balazsoficial on 2025. 05. 13..
//
#include <iostream>
using namespace std;
int sor[9] ;
int tabla[9][9];
int bastya =0;
int ratlo [9];
int batlo [15];
int oszlop [9];
void backtracking (int szint);
bool free(int Sor,int Oszlop);
void PrintBoard();
void Reset();
int main() {
    backtracking (1);





}
void PrintBoard() {
    for (int i = 1; i < 9; i++) {
        for (int j = 1; j < 9; j++) {
            cout << tabla[i][j] <<'\t' ;
        }
        cout << endl;
    }

}

void backtracking (int szint) {
    if (szint == 9) {
        PrintBoard();
        Reset();
        cout << endl;
    }
    else {
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j < 9; j++) {
                if (tabla[i][j]==0 && free(i,j) )
                {

                    tabla[i][j] = szint;
                    backtracking (szint+1);
                    tabla[i][j] = 0;}
            }


        }

    }

}
bool free(int Sor,int Oszlop) {
    //ratlo
    for (int i = 1; i < 9; i++) {
        if (ratlo[i]==Sor+Oszlop) {
          //  cout <<"false" << ratlo[i]<< "  "<<i << "  "<< oszlop+sor << "\t";
            return false;
        }
        else if (ratlo[i]==0) {
            ratlo[i] = Sor+Oszlop;
      //      cout <<"trues" << ratlo[i]<< "  "<<i <<"  "<< oszlop+sor << "\t";


        }

        }
        //batlo
        for (int i = 1; i < 15; i++) {
            if (batlo[i]==Sor-Oszlop&&batlo[i]!=0) {
                  cout <<"false" << ratlo[i]<< "  "<<i << "  "<< Oszlop+Sor << "\t";

                return false;
            }
            else if (batlo[i]==0) {
                batlo[i] = Sor-Oszlop;
                //      cout <<"trues" << ratlo[i]<< "  "<<i <<"  "<< oszlop+sor << "\t";


            }
        }
    if (sor[Sor]==0) {
        sor[Sor] = 1;
    }
    else {
        return false;
    }
    if (oszlop[Oszlop]==0) {
        oszlop[Oszlop] = 1;
    }
    else
        return false;


    return true;
}
void Reset() {
    for (int i = 1; i < 9; i++) {
        ratlo[i] = 0;
    }
    for (int i = 1; i < 15; i++) {
        batlo[i] = 0;
    }
}