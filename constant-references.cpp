//
// Created by Balazsoficial on 2025. 03. 06..
//
#include <iostream>
using namespace std;
int main() {
    int age = 19;
    const int& ref_age = age;
    cout << "age = " << ref_age << endl;
   // ref_age++; cant do this since its a const
    age++;
    //only the reference is const but the original number can still be manipulated
    cout << "age = " << ref_age << endl;

    //Replication with pointers
    cout << "\n\n\n";
    const int * const p_age = &age;
    //*p_age = 10; this wont work its read only

}