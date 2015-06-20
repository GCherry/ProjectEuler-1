/*James Andre LaCour
ProjectEuler.net
Problem 9*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;

/*Le Logic:
So if c has to be greater than b which  has to be greater than a,
I first check to see if a+b+c == 1000;
Once a set passes that condition, then checks if the a^2 + b^2 = c^2
once it does, WE COMPELTE!!!
*/
int main(){
	int a = 1;
	int b = 2;
	int c = 3;
	int finalProduct = 0;
	while (finalProduct == 0){
		if (a + b + c > 1000){			//checks if a+b+c >1000 if so....
			b++;							//increase b
			c = b + 1;						//make sure c is 1 more than b
			if (b + c >= 1000){			// then check to see if b+c is >= 1000 because if so, we need to increase a
				a++;					
				b = a + 1;				//then make b 1 more than a
				c = b + 1;				//c 1 more than b
			}
		}
		if (a + b + c == 1000){					//when we got somethign =1000
			if (pow(a, 2) + pow(b, 2) == pow(c, 2)){		//check powers
				finalProduct = a*b*c;
			}
		}
		c++;							//c always gets incremeted
	}
//	cout << "a=" << a << " b=" << b << " c=" << c-1 << "\n";       //if you want to see what the numbers are that equal it
	cout << finalProduct << '\n';
	system("pause");
	return 0;
}