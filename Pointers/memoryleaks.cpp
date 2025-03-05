//
// Created by Balazsoficial on 2025. 03. 04..
//
#include <iostream>
using namespace std;
int main(){
int * p_number =new int(8);

int number =55;
p_number = &number;
// memory is leaked
    //I am using Clion and it shows that is indeed leaked, the pointers should have been deleted
    cout << "Program ending well yay" << endl;


}
