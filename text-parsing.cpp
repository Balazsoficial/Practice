//
// Created by Balazsoficial on 2025. 04. 08..
//
#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
using namespace std;
int main(int argc,char * argv[ ]) {
    string filename="D:/Dokumentumok/Nuclear Launch Codes/cpp-console/practice/text.txt";
    ofstream copy;
    copy.open("D:/Dokumentumok/Nuclear Launch Codes/cpp-console/practice/texasdt.txt");
    ifstream input;
    input.open(filename);
    vector <string> name;
    vector<string> time;
    vector<string> action;
    if (!input.is_open()) {

        return 1;
    }
    int i =1;
    while (input) {
        string line;

        getline (input, line, ' ');
        if (line.find('\n')) {
            line = line.replace(line.find('\n'),string::npos," ");
        }
        copy << line ;
        




        if (i==1) {
            name.push_back(line);
            i=2;
        }
        else if (i==2) {
            time.push_back(line);
            i=3;
        }
        else if (i==3) {
            action.push_back(line);
            i = 1;
        }

    }

    copy.close();

}