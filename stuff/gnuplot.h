//
// Created by Balazsoficial on 2025. 06. 01..
//

#ifndef GNUPLOT_H
#define GNUPLOT_H
using  namespace std;
#include <complex>
#include <iostream>
#include <windows.h>
int gnuplot(LPCSTR  args ) {
    string s =args;
    s.append("\"");
    string ss = "-e \"";
    ss.append(s);
    ss.append("-p");

    ShellExecute(0, "open", "gnuplot.exe", ss.c_str(), 0, SW_MINIMIZE);


}
#endif //GNUPLOT_H