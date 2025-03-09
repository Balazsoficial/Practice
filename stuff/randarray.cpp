//
// Created by Balazsoficial on 2025. 03. 07..
//
#include <iostream>
#include <random>
#include <cmath>
#include <bits/stl_algo.h>
using namespace std;
int main() {
    srand(time(nullptr));
    int max=0;


    double atlag_cucc=0;
    double atlag;
    int array[100]{};

    for (int i =0; i<100; i++){
        int a= rand()%100+1;
        array[i] = a;
    }
    for (int j =0; j<100; j++) {
        if (array[j] >max) {
            max =array[j];
        }
    }
    int GCD_final = array[0];

    for (int j =0; j<100; j++) {
        atlag_cucc+=array[j];
        atlag= atlag_cucc/size(array);

    }

    int *p_array = array;
    for (int j =1; j<100; j++) {

        do{
            if(GCD_final>p_array[j]){
                GCD_final=GCD_final-p_array[j];  }
            else if (p_array[j]>GCD_final){

                p_array[j]=p_array[j]-GCD_final;}
        }
        while(GCD_final!=p_array[j]);
        {
        }
    }
       // cout << "Lcm test " << LCA << endl;
       // cout << "Lcm: " << LCM << endl;
        cout << "gcd: " << GCD_final << endl;
        cout << "Az átlag: " << atlag << endl;
        cout << "A legmasszivabb:   "<<max << endl;

}
