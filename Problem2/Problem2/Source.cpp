/*James Andre LaCour
ProjectEuler.net
Problem 2*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int firstTerm = 1;
	int secondTerm = 2;
	int tempTerm;
	int evenSum = 0;
	while (secondTerm < 4000000){		//while under 4 million
		if (secondTerm % 2 == 0){		//check if second term is even
			evenSum += secondTerm;		//if so add it to the total sum
		}
		tempTerm = secondTerm;			//switch first term to second
		secondTerm += firstTerm;		//and make second term..
		firstTerm = tempTerm;			//..first term plus old second
	}
	cout << evenSum << "\n";
	system("pause");
	return 0;
}