//
// Created by Balazsoficial on 2025. 02. 25..
//
#include <iostream>
using namespace std;

const int pen =10;
const int marker =20;
const int rectangle =30;
const int circle =40;
const int eraser =50;
const int ellipse =60;

int main() {


        int tool=circle;

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