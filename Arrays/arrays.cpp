//
// Created by Balazsoficial on 2025. 02. 28..
//
#include <iostream>
using namespace std;
int main(){
    //declare
    int scores [10];

    //read
    for (size_t i = 0; i < 10; i++){
      cout <<"Scores["<<i<<"]: "<< scores[i] << endl;
      //junk data since it hasnt been initialized
    }
    //Writeing data into the array
    for (size_t i = 0; i < 10; i++){
      scores [i] = i*10;
    }
    cout << endl;
    cout << "Data written into the array" << endl;
    cout << endl;
  for (size_t i = 0; i < 10; i++){
    cout <<"Scores["<<i<<"]: "<< scores[i] << endl;
  //now initialized so correct data
  }
  //initialization at decleartion
  double salaries [5] {21.5,234.2,1.4,6543.2,234};
  //Omit size at decleration
  int class_sizes [] {1,2,3,4};
  //printing with a range based for loop
  for (auto value : class_sizes){
    cout << "Value: "<<class_sizes[value] << endl;

  }

  //sum of an array

  int numbers [] {1,4,7,2,78,5};
      int sum=0;

  for (auto value : numbers){
      sum += value;
  }
  cout << "Sum of array: "<< sum << endl;

  }