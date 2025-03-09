//
// Created by Balazsoficial on 2025. 03. 02..
//
#include <iostream>
using namespace std;
int main() {
    int nums [] = {4,3,1,6,8435,324,2,6,8,124,1,2};
    for (int i =0; i<size(nums)-1; i++) {
      int temp =0;
        if (nums[i]<nums[i+1]) {
            temp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = temp;
            i =-1;
    }
    }
    for (auto kalman :nums) {
        cout << kalman << endl;
    }
}