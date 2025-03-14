//
// Created by Balazsoficial on 2025. 03. 14..
//
#include <iostream>
using namespace std;
void max_str(string &str1, string &str2, string &output);
void max_num(int num1, int num2, int  &output);
void max_double(double *num1, double *num2, double *output);
int main(){
  string str1 ="Alabama";
  string str2 ="Blabama";
  string output="";
  int num1= 43;
  int num2 = 893;
  int max;
  double db_nm1 = 3.1415;
  double db_nm2 = 2.7178;
  double db_ret;
  max_str(str1, str2, output);
  cout << "Max_str: "<< output << "\n";
  cout << endl;
  max_num(num1, num2, max);
  cout << "Max num: "<< max << "\n";
  cout <<endl;
  max_double(&db_nm1, &db_nm2, &db_ret);
  cout << "Max double: "<< db_ret << "\n";





}
void max_str(string &str1, string &str2, string &output){
  str1>str2? output=str1 :output=str2;
}
void max_num(int num1, int num2, int &output){
  num1>num2? output=num1 :output=num2;
}
void max_double(double *num1, double *num2, double *output){
  num1>num2? *output=(*num1) :*output=*num2;
}