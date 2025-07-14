#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int sum=0;
void sfn(int max);
int szam= 0;
vector <int>asd;
int counter=0;
int main(){


	
	double temp;
	int max;

	
	cin >> max;
	sfn(max);
	temp =static_cast <double>(counter)/static_cast <double>(max);
	temp=temp*100l;
	cout << "Found " << counter << " out of the  " << max  << " Numbers! " << endl;
	cout << "Thats " <<  temp <<"% of the total" << endl; 
	

	}
	
void sfn(int max){
	
		for ( int j = 1; j <=max; j++)
		{
		for (int i= 1; i<=j/2; i++)
	{
		if(double(j%i) ==0)
		{
		//cout << i << "	" <<endl;
		sum = sum+ i;
		}
		
		}
		auto a = find(asd.begin(), asd.end(), sum);
		if(find(asd.begin(), asd.end(), sum) != asd.end())
		{
		cout << "sum: " << sum  <<" at the num: "<< a - asd.begin()+1 << " current num: " << j <<endl;
		counter++;
		}
		else
		{}
		
		asd.push_back(sum);
		sum =0;
	
	}



	
	
	
	}
