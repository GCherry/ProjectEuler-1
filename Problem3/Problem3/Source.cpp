/*James Andre LaCour
ProjectEuler.net
Problem 3*/

#include <iostream>
#include <stdio.h>
#include "../../Functions.h"
using namespace std;

int main() {
	long long finalNumber = 600851475143;
	long long answer;
	for (long long i = 2; i < finalNumber / 2; i++){		//Checks lowest Multipe
		if (finalNumber % i == 0){				//then divides lowest multiple to get highest multiple
			if (isPrime(finalNumber/i)){		//then decides wheather thats prime
				answer = finalNumber / i;
				break;
			}
		}
	}

	cout << answer << "\n";
	system("pause");
	return 0;
}