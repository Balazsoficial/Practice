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
  int tool = pen;
  switch (tool) {
  case pen: cout << " Active tool is Pen"<< endl; break;
    case marker: cout << "Active tool is marker" << endl; break;
      case rectangle: cout << "Active tool is rectangle" << endl; break;
        case circle: cout << "Active tool is circle" << endl; break;
          case eraser: cout << "Active tool is eraser" << endl; break;
            case ellipse: cout << "Active tool is ellipse" << endl; break;
              default: cout << " Active tool is unknown" << endl; break;


  }



  return 0;
}