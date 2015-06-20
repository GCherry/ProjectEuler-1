/*James Andre LaCour
ProjectEuler.net
Problem 10*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* Current Logic = Brute Force
Runtime ~43min 57 seconds
THIS IS HORRIBLE!!!!!!! COMING BACK TO THIS CODE!!!!!*/
int main(){
	long long total = 17;
	int isPrime = 0;
	for (int i = 11; i < 2000000; i=i+2){
		for (int j = i/2; j >=1; j--){
			if (i % 5 == 0){ 
				break;
			}else if (i%j == 0){
				isPrime++;
			}if (isPrime > 1){
				break;
			}
		}

		if (isPrime == 1){
			total = total + i;
		}
		isPrime = 0;

	}
	cout << total << '\n';
	system("pause");
	return 0;
}