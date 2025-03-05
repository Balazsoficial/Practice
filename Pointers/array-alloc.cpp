//
// Created by Balazsoficial on 2025. 03. 04..
//
#include <iostream>
using namespace std;
int main() {
  size_t size =10;
  int * p_array = new int[size]{1,2,4,5,6,7,8,5,};

  for (int i = 0; i < size; i++) {
      cout << p_array[i] << endl;


  }
 //range based for loops and std::size can not be used
    delete [] p_array;
    p_array = nullptr;
    return 0;


}
