/*James Andre LaCour
ProjectEuler.net
Problem 10*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*Runtime ~ 2-3 minutes
Still not where I want it but considerably better than before*/
int main(){
	int j = 0;
	long long total = 0;
	int isPrime = 0;
	for (int i = 1; i < 2000000; i++){
		if (i % 2 == 0){
			if (2 * 2 == i){
				isPrime = isPrime + 2;
			}else{
				isPrime++;
			}
		}
		if (i % 3 == 0){
			if (3 * 3 == i){
				isPrime = isPrime + 2;
			}else{
				isPrime++;
			}
		}
		if (i % 5 == 0){
			if (5 * 5 == i){
				isPrime = isPrime + 2;
			}else{
				isPrime++;
			}
		}
		if (isPrime == 0){
			for (int k = 7; k < i / 2; k = k + 2){
				if (k % 5 == 0){
					k = k + 2;
				}
				if (i%k == 0){
					isPrime++;
					break;
				}
			}
		}

		if (i < 7 && isPrime==1){
			total = total + i;
		}
		else if (isPrime == 0 && i > 6){
			total = total + i;
		}
		isPrime = 0;
	}
	cout << total << '\n';
	system("pause");
	return 0;
}