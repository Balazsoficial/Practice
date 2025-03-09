//
// Created by Balazsoficial on 2025. 03. 09..
//
#include<iostream>
using namespace std;
int main() {
     //you can use all the previous string manipulations
     string full_name;
     string planet ="Earth. Where the sky is blue";
     string prefered_planet =planet;
     string message ="Hello there!";
     string wierd_message(4,'e');
     string greetings="Hello World!";
     string saying_hello={greetings,6,5};

     cout << "Full name: " << full_name << endl;
     cout << "Prefered planet: " << prefered_planet << endl;
     cout << "Message: " << message << endl;
     cout << "Wierd message: " << wierd_message << endl;
     cout << "Greetings: " << greetings << endl;
     cout << "Saying_hello: " << saying_hello << endl;
     //we can resize at runtime without a problem
     planet ="Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where the sky is blue";
     cout << "planet: " << planet << endl;

     //Using raw array
     return 0;


}
