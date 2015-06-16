/*James Andre LaCour
ProjectEuler.net
Problem 3*/

using namespace std;
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //has itoa in it

int main(){
	int firstNumber = 999;
	int secondNumber = 999;
	int largestNum=0;
	int total;
	char value[10];
	bool flag = true;
	while (firstNumber>0){
		total = firstNumber*secondNumber;
		_itoa_s(total, value, 10);
		for (int i = 0; i < strlen(value)/2; i++){
			if (value[i] != value[strlen(value) - 1 - i]){
				break;
			}
			if (i==strlen(value)/2-1 && total > largestNum){
				largestNum = total;
			}
		}

		if (secondNumber > 0){
			secondNumber--;
		}
		else{
			firstNumber--;
			secondNumber = firstNumber;
		}
	}
	cout << largestNum << '\n';
	system("pause");
	return 0;
}
