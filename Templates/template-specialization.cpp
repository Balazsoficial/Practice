//
// Created by Balazsoficial on 2025. 03. 28..
//
#include <iostream>
#include <string.h>
using namespace std;
template <typename T> T maximum (T a,T b) {
    return (a>b) ? a : b;
}

template <>
const char * maximum<const char*> (const char* a, const char* b) {
   return   (strcmp(a, b)>0 ? a : b);

}
int main() {

    const char* g {"Hello World"};
    const char* s { "Hello balazs"};
    const char * result =maximum(g,s);
    cout << result << endl;

}