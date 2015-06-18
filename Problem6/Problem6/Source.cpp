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
	for (int i = 1; i <= 100; i++){
		sumOfSquares = sumOfSquares + pow(i, 2);
	}
	for (int j = 1; j <= 100; j++){
		squaresOfSum =  squaresOfSum + j;
	}
	squaresOfSum = pow(squaresOfSum, 2);
	difference = squaresOfSum-sumOfSquares;
	cout << difference << '\n';
	system("pause");
	return 0;
}