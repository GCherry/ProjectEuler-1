/*James Andre LaCour
ProjectEuler.net
Problem 370*/
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int perimeter = pow(10, 6);
	int a = 1;
	int b = 1;
	int c = 1;
	int totalCount = 0;
	int tempCount = 0;
	bool flag = true;
	while (flag){
		b = pow(b, 2);
		for (int i = 1; i <= b; i++){
			if (b == 1){
				totalCount++;
			}
			else if ((b % i) == 0){
				a = i;
				c = b / a;
				if (a > sqrt(b) && c < sqrt(b)){
					break;
				}
				cout << "a=" << a << " b=" << b << " c=" << c << "\n";
				if (a + sqrt(b) + c <= perimeter){
					//cout << "sdfa";
					totalCount++;
				}
				if(sqrt(b)==perimeter){
					flag = false;
				}
			}
		}
		b = sqrt(b) + 1;
//		cout << totalCount << "\n";
//		system("pause");
	}

/*	while (1){	//Attempt 1: wasnt working also woulda have taking hella long to complete
		cout << "a=" << a << "   b=" << b << "   c=" << c << "\n";
		if (a + b + c <= perimeter){				//c++ until the count is over the perimeter
			totalCount++;							//then c restarts to b and b increases
//			cout << totalCount << "\n";				//when a+b+c is greater then perimter and b is the highest..
		}else{										//a is increased and be and c are reset to what a is
			if (c > a && c > b){					//does this till a is the highest which then it breaks
				b++;
				c = b - 1;
			}
			else if (b > a &&  b >= c){
				a++;
				b = a;
				c = a - 1;
			}
			else if (a >= b && a >= c){
				break;
			}
		}
		c++;
	}*/
	cout << totalCount << "\n";
	system("pause");
	return 0;
}