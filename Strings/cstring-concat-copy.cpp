//
// Created by Balazsoficial on 2025. 03. 09..
//
#include <iostream>
#include <string.h>
using namespace std;
int main(){
  cout << endl;
  cout <<"std::strcat"<<endl;
  char dest[50] ="Hello ";
  char src[50] = "World!";
  strcat(dest, src);
  strcat(dest, " Goodbye World!");
  cout << "Dest: " << dest << endl;



//with dynamic arrays
  char *dest1 =new char[50]{"Firelord,"};
  char *src1 =new char[50]{" The Phoenix King!"};
  cout <<"strlen(dest1) " <<strlen(dest1) << endl;
  cout <<"strlen(src1) "<< strlen(src1) << endl;
  cout << strcat(dest1, src1) << endl;
  delete dest1;
  delete src1;
  src1 =nullptr;
  dest1 =nullptr;

    //std::strncat same but with n characters

  char dest2[50]="Hello";
  char src2[50]=" There is a bird in the window!";
  cout << strncat(dest2, src2, 6) << endl;



  //std::strcpy
  cout << endl;
  const char *source3 ="C++ is a programming language";
  char *dest3 =new char[strlen(source3)+1];//+1 for the null character on the end

  strcpy(dest3, source3);
  cout <<"sizeof(dest3): "<< sizeof(dest3) << endl;
  cout << "std:strlen(dest3): " <<strlen(dest3) << endl;
  cout <<"Dest3: " << dest3 << endl;
  //std::strncpy same as before but with n characters

  cout << endl;

  const char * source4 ="Hello";
  char dest4[] ={"abcdef"};
  cout << "dest4: " << dest4 << endl;
  cout << "Copying..." << endl;
  strncpy(dest4,source4,5);
  cout << "dest4: " << dest4 << endl;




}