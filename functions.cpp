//
// Created by Balazsoficial on 2025. 03. 10..
//
#include <iostream>
#include <random>
using namespace std;
void enter_bar(unsigned age);
int max(int a, int b);
void say_hello();
int luckynumber();
double increment_multiplie(double a, double b);
int main() {

    int num1 =2;
    int num2 =4;
    increment_multiplie(num1, num2);
    cout << num1 <<"  "<< num2 <<" Increment and multiplie: " <<increment_multiplie(num1,num2) << endl;
    say_hello();
    enter_bar(22);
    cout << "The bigger number between 32 and 65 is: " << max(32,65)<<endl;
    cout << "Your lucky number is: "<< luckynumber() << endl;





}
void enter_bar(unsigned age) {
    if (age >= 18) {
        cout << "You can enter the bar!!" << endl;
    }
    else {
        cout << "You are too young to enter" << endl;
    }

}
int max(int a, int b) {
    return a > b ? a : b;

}
void say_hello() {
    cout <<"Hello There!" << endl;
    return;
}
int luckynumber() {
    srand(time(nullptr));
    int a = rand() % 100;
    return a;
}
double increment_multiplie(double a,double b) {
   double result = (++a) * (++b);
    return result;


}