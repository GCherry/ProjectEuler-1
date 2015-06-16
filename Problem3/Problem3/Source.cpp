/*James Andre LaCour
ProjectEuler.net
Problem 3*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	bool flag = true;		//Flag to stay in the loop, once we have prime number, turns to false
	int finalNumber = 600851475143;
	int isPrime = 0;		//if isPrime==2 then we got our answer, any over and its not prime
	while (flag == true){
		finalNumber--;
		if (600851475143 % finalNumber == 0){			//if mod ==0 then it is a factor
			isPrime = 0;
			for (int i = finalNumber; i > 0; i--){		//check to see if factor is a prime number
				if (finalNumber%i == 0){
					isPrime++;
				}
				if (isPrime ==3){
					break;
				}
			}
			if (isPrime == 2){
				flag = false;
			}
		}
	}
	cout << finalNumber << "\n";
	system("pause");
	return 0;
}