/*James Andre LACour
ProjectEuler.net
Problem 7*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/*
My logic: trial and error throughout the problem...
Probably not the most effiecent but didnt take a long time to run on comp but DEFINITELY NOT instant
*/
int main(){
	int primeCount=6;
	int answer = 13;
	while (primeCount != 10001){			//while not at 10001st prime number
		answer++;
		for (int j = answer - 1; j > 1; j--){			//check if prime
			if (answer%j == 0){							//if not on to next number
				break;
			}
			else if (j == 2){					//if so increase prime count
				primeCount++;			
			}
		}
	}
	cout << answer << '\n';
	system("pause");
	return 0;
}