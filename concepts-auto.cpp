//
// Created by Balazsoficial on 2025. 03. 30..
//
 #include<iostream>
#include <concepts>
using namespace std;
integral auto add(integral auto a,integral auto b)
{return a+b;}
int main() {
 double a=1.5625;
 double b=1.556225;
 int a1 =1;
 int b1 =3;

 //add(a,b);//Substitution failed due to constraints: double does not satisfy concept integral, because requirement is_integral_v<double> is not satisfied
 add(a1,b1); //this works as always

 floating_point auto x =add(a1,b1); // deduced initializer does not satisfy placeholder constraints  floating_point auto x =add(a1,b1);
 //this is quite useless over all bc why check if you know that its a double
}