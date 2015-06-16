/*James Andre LaCour
ProjectEuler.net
Problem 1*/
#include <iostream>
#include <stdint.h>
using namespace std;

int main(){
	int totalSum = 0;
	for (int i = 1; i < 1000; i++){		//while count is under thousand
		if (i % 3 == 0 || i % 5 == 0){	//check to see if multiple of 3 or 5
			totalSum = totalSum + i;	//if so add to total
		}
	}
	cout << totalSum << "\n";
	system("pause");
	return 0;
}