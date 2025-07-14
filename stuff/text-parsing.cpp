//
// Created by Balazsoficial on 2025. 04. 08..
//
#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
using namespace std;
int main(int argc,char * argv[ ]) {
    if (argc > 2) {
        cout << "Too many arguments\n";
    }
    else if (argc == 2) {
        string file=argv[1];
        ifstream input;
        input.open(file);
        vector <string> name;
        vector<string> time;
        vector<string> action;
        if (!input.is_open()) {

            return 1;
        }
        else{
            int i =1;
            while (input) {
                string line;
                getline (input, line, '\n');
                stringstream stream(line);
                string piece;
                while ( stream >> piece ) {
                    if (i==1) {
                        name.push_back(piece);
                        i++;
                    }
                    else if (i==2) {
                        time.push_back(piece);
                        i++;
                    }
                    else if (i==3) {
                        action.push_back(piece);
                        i=1;
                    }

                }
            }
        }
        for (int i =0;i<name.size();i++) {
            cout << name[i] << endl;
        }

    }
    else if (argc <2) {
        string filename="D:/Dokumentumok/Nuclear Launch Codes/cpp-console/practice/text.txt";
        ifstream input;
        input.open(filename);
        vector <string> name;
        vector<string> time;
        vector<string> action;
        if (!input.is_open()) {

            return 1;
        }
        else{
            int i =1;
            while (input) {
                string line;
                getline (input, line, '\n');
                stringstream stream(line);
                string piece;
                while ( stream >> piece ) {
                    if (i==1) {
                        name.push_back(piece);
                        i++;
                    }
                    else if (i==2) {
                        time.push_back(piece);
                        i++;
                    }
                    else if (i==3) {
                        action.push_back(piece);
                        i=1;
                    }

                }
            }
        }
        for (int i =0;i<name.size();i++) {
            cout << name[i] << endl;
        }
    }


}
