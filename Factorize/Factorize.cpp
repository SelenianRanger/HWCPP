/*
 * Factorize.cpp
 *
 *      Author: Sina Kamali
 *      ID:		610394126
 */

#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(unsigned long long int);

int main() {
	unsigned long long int number;
	cin >> number; //get number from user input

	unsigned long long int num = 2;
	while (number > 1) {
		if (number % num == 0 && checkPrime(num)) {	//check if num is a prime factor of number
		//remove factor from number
			while (number % num == 0)
				number /= num;
			cout << num << " "; //print the prime factor
		}
		num++; //check next num
	}

	return 0; //successful termination
}

bool checkPrime(unsigned long long int num) {
	for (int number = 2; number <= sqrt(num); number++) {
		if (num % number == 0) //check if divisible
			return false;
	}
	return num != 1;
}
