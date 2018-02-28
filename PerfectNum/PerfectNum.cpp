/*
 * PerfectNum.cpp
 *
 *      Author: Sina Kamali
 *      ID:		610394126
 */

#include <iostream>

using namespace std;

int main() {

	int number;
	cin >> number; //get number

	int sum = 0;
	//calculate total sum of all of number's divisors
	for (int num = 1; num < number; num++) {
		if (number % num == 0)
			sum += num;
	}

	//print appropriate message
	cout << (sum == number ? "Yes" : "No") << endl;

	return 0; //successful termination
}

