//
// Created by Balazsoficial on 2025. 03. 01..
//
#include <iostream>
using namespace std;
int main() {

  int numbers [10] {1,3,4,5,6,7,8,9,0};
    //modifying out of bounds is enabled by the compiler but it will ber unexpected
    cout <<numbers[12] << endl;
    //dont go overbound

}