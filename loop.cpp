// SumCalculator.cpp
#include <iostream>
using namespace std;
int main() {
    int sum=0;
   int num[8] ={1,2,3,4,5,6,7,8};
    for(int i =0; i<8; i++){
    	sum=sum+num[i];
    	  std::cout << "The sum of " << sum << std::endl;
	}
    std::cout << "The sum of " << sum << std::endl;

    return 0;
}
