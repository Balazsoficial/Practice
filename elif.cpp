//
// Created by Balazsoficial on 2025. 02. 25..
//
#include <iostream>
using namespace std;

int pen =10;
int marker =20;
int rectangle =30;
int circle =40;
int eraser =50;
int ellipse =60;

int main() {


        int tool{circle};

        if (tool ==pen)
          {
          cout << "The active tool is pen" << endl;}
          else if (tool ==marker){
              cout << "The active tool is marker" << endl;}
          else if (tool ==rectangle){
              cout << "The active tool is rectangle" << endl;}
          else if (tool ==circle){
              cout << "The active tool is circle" << endl;}
          else if (tool ==eraser){
              cout << "The active tool is eraser" << endl;}
          else if (tool ==ellipse){
              cout << "The active tool is ellipse" << endl;}





}