bool isPrime(long long number){
	int isPrime = 0;
	if (number == 1){
		return false;
	}else if (number % 2 == 0 && number != 2){
		return false;
	}else if (number % 3 == 0 && number != 3){
		return false;
	}else if (number % 5 == 0 && number != 5){
		return false;
	}else{
		for (int i = 7; i < number / 2; i = i + 2){
			if (i % 5 == 0){
				i = i + 2;
			}else if (number % i == 0){
				return false;
			}
		}
		return true;
	}
}
