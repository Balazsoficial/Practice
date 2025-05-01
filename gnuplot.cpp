//
// Created by Balazsoficial on 2025. 04. 24..
//
#include <iostream>
#include <windows.h>
int main() {
    char asd ='"';
    std::string builder ="-e \"set samples 1000;"
"set contour base;"
"unset surface;"
"set cntrparam levels discrete 0;"
"set view map;"
"set xtics axis;"
"set ytics axis;"
"set arrow 1 from 0,0 to graph 1, first 0 filled head;"
"set arrow 2 from 0,0 to first 0, graph 1 filled head;"
"set arrow 3 from 0,0 to graph 0, first 0 filled head;"
"set arrow 4 from 0,0 to graph 0, first 0 filled head;"
    "plot sin(x)\" -p";
    ShellExecute(0, "open", "gnuplot.exe", builder.c_str(), 0, SW_MINIMIZE);

}