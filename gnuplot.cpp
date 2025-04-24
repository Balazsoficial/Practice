//
// Created by Balazsoficial on 2025. 04. 24..
//
#include <iostream>
#include <windows.h>
int main() {
    char asd ='"';
    std::string builder = "echo ;echo set samples 1000;echo set contour base;echo unset surface;echo set cntrparam levels discrete 0;echo set view map;echo splot   5*x**2 + x*y + x + y + 1 with lines notitle;pause";
    ShellExecute(0, "open", "gnuplot.exe", "-e \"plot sin(x)\" -p", 0, SW_MINIMIZE);

}