/*James Andre LaCour
ProjectEuler.net
Problem 6*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath> //needed for power function
using namespace std;

int main(){
	int sumOfSquares = 0;
	int squaresOfSum = 0;
	int difference;
	for (int i = 1; i <= 100; i++){			//100 is basically a variable for whatever you want to do
		sumOfSquares = sumOfSquares + pow(i, 2);	// 1^2 + 2^2 + 3^2 +......+n^2
	}
	for (int j = 1; j <= 100; j++){
		squaresOfSum =  squaresOfSum + j;		//1+2+3+......+n
	}
	squaresOfSum = pow(squaresOfSum, 2);		//then squares ^^that number
	difference = squaresOfSum-sumOfSquares;		//difference for them joints
	cout << difference << '\n';
	system("pause");
	return 0;
}