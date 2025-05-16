//
// Created by Balazsoficial on 2025. 05. 13..
//
#include <iostream>
#include <chrono>
using namespace std;
const int n = 8;

int tabla[27][27];
int ratlo[27];
int batlo[27];
int oszlop[27];
int szam = 0;
int filler = 1488;

void backtracking(int szint);

bool free(int Sor, int Oszlop);

void PrintBoard();

void Reset();

void alloc(int Sor, int Oszlop, int Szint);

int main() {
    cout << "Balazsofficials N queen problem solver" << endl << endl;
    Reset();
    auto start = std::chrono::high_resolution_clock::now();
    backtracking(1);
    auto stop = std::chrono::high_resolution_clock::now();
    cout << "Amount of solutions: "<<szam << endl;
    cout <<"Time in Nanoseconds:   " << duration_cast<std::chrono::nanoseconds>(stop - start)  << endl;
    cout << "Time in milliseconds: " <<  duration_cast<std::chrono::milliseconds>(stop - start)  << endl;
    cout <<"Time in Seconds:       "<< duration_cast<std::chrono::seconds>(stop - start).count() << "s" << endl;
}

void PrintBoard() {
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            cout << tabla[i][j] << '\t';
        }

        cout << endl;
    }
    cout << endl;
    //cout << szam << endl; // debug
}

void backtracking(int szint) {
    if (szint == n + 1) {
        szam++;
        PrintBoard();
    } else {
        for (int j = 1; j <= n; j++) {
            if (tabla[szint][j] == 0 && free(szint, j)) {
                tabla[szint][j] = szint;
                //  PrintBoard();
                alloc(szint, j, szint);
                backtracking(szint + 1);
                oszlop[szint] = filler;
                ratlo[szint] = filler;
                batlo[szint] = filler;
                tabla[szint][j] = 0;
            }
        }
    }
}

bool free(int Sor, int Oszlop) {
    //ratlo
    for (int i = 1; i < n + 1; i++) {
        if (ratlo[i] == Sor - Oszlop && ratlo[i] != filler) {
            //  cout <<"false" << ratlo[i]<< "  "<<i << "  "<< oszlop+sor << "\t";
            return false;
        }
    }
    //batlo
    for (int i = 1; i < n + 1; i++) {
        if (batlo[i] == Sor + Oszlop && batlo[i] != filler) {
            // cout <<"false" << ratlo[i]<< "  "<<i << "  "<< Oszlop+Sor << "\t";

            return false;
        }
    }
    for (int i = 1; i < n + 1; i++) {
        if (oszlop[i] == Oszlop) {
            return false;
        }
    }


    return true;
}

void Reset() {
    for (int i = 1; i < n + 1; i++) {
        ratlo[i] = filler;
    }
    for (int i = 1; i < n + 1; i++) {
        batlo[i] = filler;
    }
}

void alloc(int Sor, int Oszlop, int Szint) {
    oszlop[Szint] = Oszlop;
    ratlo[Szint] = Sor - Oszlop;
    batlo[Szint] = Sor + Oszlop;
}
