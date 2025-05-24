//
// Created by Balazsoficial on 2025. 05. 24..
//
#include <complex>
#include <iostream>

using namespace std;
//checks if sqrtx +sqrty = sqrtz
int main() {
    int max = 100;
    int x,y,z;
    for (x=1;x<=max;x++) {
        for (y=x;y<=max;y++) {
            for (z=x+y+1;z<=max;z++) {
                if (2*(x*y)==pow(x,2)+pow(y,2)+pow(z,2)-2*(z*y)-2*(z*x)){
                    cout <<"x:"<<x<<"  ";
                    cout<<"y:"<<y<<"  ";
                    cout<<"z:"<<z<<"  ";
                    cout <<endl;

                }
            }
        }
    }


}