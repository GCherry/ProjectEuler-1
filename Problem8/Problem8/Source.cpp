/*James Andre LaCour
ProjectEuler.net
Problem 8*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* My logic:
So after forever, I realized that my biggest upset in my code when I wrote it was that
I wasn't using big enough data integers. So after maxxing those data types to 'long long'
My code provided the right answer. I believe using unsigned int might also provide the right answer but I didn't try.

MY logic is taking the the 1000 digit number and putting it in a string. Then I read char by char
the number and multiply it out until i hit 13 integers.
If I stumble upon a 0 in the string, I set my cursor to be one infront of that index so
because 0 will be 0 no matter what, then I keep on chugging.*/
int main(){
	char number[1001] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int beginning = 0;
	int end = 12;
	long long total = 0;		//made them long long, biggest data type
	long long temp = 1;			//only other thing i could think of was making it unsigned so it frees up more
	char index[1];
	while (end < 1000){			//while we are not past the last number
		for (int i = beginning; i <= end; i++){		//loop to multiply the 13 digits
			if (number[i] == '0'){			//if 0 set starting spot after it and continue
				beginning = i + 1;
				end = beginning + 12;
				temp = 1;
				break;
			}
			index[0] = number[i];
			temp = temp * atoi(index);			//temp to hold number as multiplying
		}
		if (temp > total){					//if temp is bigger than total, make it total!
			total = temp;
		}
		temp = 1;
		beginning++;
		end++;
	}
	cout << total << '\n';
	system("pause");
	return 0;
}