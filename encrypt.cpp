#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main(){
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);

    std::uniform_int_distribution<> distrib(1, 100);

int nums[2];

for(int i=0;i<=1;i++)
{
srand(time(0));
nums[i] = distrib(gen);
}

cout << nums[0]<<"  " <<nums[1] << endl;



return 0;
}
