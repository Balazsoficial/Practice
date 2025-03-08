//
// Created by Balazsoficial on 2025. 03. 08..
//
#include <iostream>
#include  <cstring>
using namespace std;
int main(){

    char message1 [] = "The sky is blue";
    const char *message2 = "The sky is blue";
    cout << "Message1: " << message1 << endl;
    cout << "Message2: " << message2 << endl;
    cout << "Length of message1: " << strlen(message1) << endl;
    cout << "Length of message2: " << strlen(message2) << endl;
    //strlen ignores the null character at the end and can be used on pointers unlike sizeof()


    //strcmp
    cout << endl;
    const char *string1 = "Alabama";
    const char *string2 = "Vlabama";

    //compare
    cout << "strcmp(" << string1 << "," << string2 << "): " << endl;
    cout << strcmp(string1, string2) << endl;
    //works on arrays and cstrings too
    //returns negative if the first string is in front of the second one in the alphabetical order
    //one if its after and 0 if they are the same



    //strncmp same as before but with given length on how far to compare

    int n =3;
    char * string_data1 = "aaaia";
    char * string_data2 = "aaanbasd";

    cout << "strncmp(" << string_data1 << "," << string_data2 << "," << n << "): " << endl;
    cout << strncmp(string_data1, string_data2, n) << endl;
    //the numbers are the same as before
    cout << endl;


    //std:strchr
    const char * str = "Try not.Do, or do not. There is no try";
    char target ='T';
    const char* result =str;
    int iterations =0;

    while ((result = strchr(result,target))!=nullptr) {
        cout << "Found:  " << target << " Starting at:  " << result << endl;
        iterations++;
        result ++;


    }
    cout << iterations << endl;



    cout << endl;
    //strrchr returns a pointer to the last occurrence of character in the C string str.


    char input[] = "/home/user/hello.cpp";
    char* output =strrchr(input,'/');

    if (output) {
        cout <<output+1 << endl;
    }



}
