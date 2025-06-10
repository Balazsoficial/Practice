//
// Created by Balazsoficial on 2025. 06. 08..
//

#include "nasahelper.h"
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <bits/ostream.tcc>
#include <fstream>
#define IDB_EMBEDEXE 101
using namespace std;
int main() {
    HRSRC hResource = FindResource(NULL, MAKEINTRESOURCE(IDB_EMBEDEXE), TEXT("BINARY"));
    HGLOBAL hGlobal = LoadResource(NULL, hResource);
    size_t exeSiz = SizeofResource(NULL, hResource); // Size of the embedded data
    void*  exeBuf = LockResource(hGlobal);
    if (!hResource)
        cout  << "Couldnt lock resource" << endl;


    cout << "asd" << endl;
    cout << exeSiz;
   hResource;
    std::ofstream of("asd.exe", std::ios::binary);
    cout << exeBuf;
    of << exeBuf;

}

