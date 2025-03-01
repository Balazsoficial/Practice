//
// Created by Balazsoficial on 2025. 03. 01..
//
#include <iostream>
using namespace std;
int main(){

  int nums[] = {1,2,3,4,5,6,7,8,9};
  //after c++ 17
	size_t count = size(nums);

        for (int i = 0; i < count; i++){
          cout << nums[i] << endl;
        }
	//old way of doing the same thing
	int count1 = sizeof(nums)/sizeof(nums[0]);
	// Or you can use a range based for loop
}