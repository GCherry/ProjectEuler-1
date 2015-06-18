/*James Andre LaCour
ProjectEuler.net
Problem 5*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

/*My logic: when things are divisible by a higher number, they are also divisible by a lower
with this logic, it allows me to check for all numbers under 20 that are divisble without checking them
all numbers are divisble by 
20 = 1,2,4,5,10,20
19 = prime number
18 = 1,2,3,6,9,18
17 = prime number
16 = 1,2,4,8,16
15 = 1,3,5,15
14 = 1,2,7,14
13 = prime number
12 = 1,2,6,12
11 = prime number
So 1-10 area all check in these 10 numbers
So I just need to check divisbility of 11-20 and it checks the other 10. Cuts time in half I guess for now.
*/

int main(){
	int smallestNumber=2519;	//we can start at 2520 because it was given to us that it was smallest from 1-10
	bool flag = false;			//so at least here for 11-20
	while (flag==false){
		smallestNumber++;		//this starts it at 2520
		for (int i = 20; i >= 10; i--){		//checks divissible down from 20-11
			if (i == 10){					//if i==10 then it passed the 1-20 divisble test
				flag = true;				//WE DONE WITH THIS CODE!!
				break;
			}
			if (smallestNumber % i != 0){	//checks divisbility
				break;
			}
		}
	}
	cout << smallestNumber << '\n';
	system("pause");
	return 0;
}