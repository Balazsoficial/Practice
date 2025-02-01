#include <iostream>
using namespace std;
int main() {
    short val1 {10};
    int val2 {-300};
    long long int val3 {-400};
    cout <<"val1: "<< val1 << endl;
    cout <<"val2: "<< val2 << endl;
    cout <<"val3: "<< val3 << endl;
    cout << "(short) sizeof(val1): " << sizeof(val1) << endl;
    cout << "(normal) sizeof(val2): " << sizeof(val2) << endl;
    cout << "(long long) sizeof(val3): " << sizeof(val3) << endl;
    //signed unsigned does not matter in memory consumption

    return 0;
}