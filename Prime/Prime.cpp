/*
 * Prime.cpp
 *
 *      Author: Sina Kamali
 *      ID: 	610394126
 */

#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(unsigned long long int);

int main() {
	unsigned long long int number;
	//get number from user input
	cin >> number;
	//check whether number is a prime
	cout << (checkPrime(number) ? "YES" : "NO") << endl;

	return 0; //successful termination
}

bool checkPrime(unsigned long long int num) {
	for (int number = 2; number <= sqrt(num); number++) {
		if (num % number == 0) //check if divisible
			return false;
	}
	return num != 1;
}
