#include <iostream>
#include <random>
using namespace std;
int main(){
 int x = 2147483646;
int a;
bool whilea=false;
int i =0;
do


{

srand(i);
 a = rand();

 if(a<x)
 x=a;
 
 /*
cout <<"Random num: " <<a<<" Seed value: "<< i<< "  Legkisebb szam: " <<x<< endl;
*/
i++;
if(a== rand()-1){
	whilea=true;
	cout <<"Random num: " <<a<<" Seed value: "<< i<< "  Legkisebb szam: " <<x<< endl;
	}

	

}

while(!whilea);
cout <<"Random num: " <<a<<" Seed value: "<< i<< "  Legkisebb szam: " <<x<< endl;



//Random num: 0 Seed value: 808357015  Legkisebb szam: 0

}
