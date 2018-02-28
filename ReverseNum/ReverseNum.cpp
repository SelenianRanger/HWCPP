/*
 * ReverseNum.cpp
 *
 *      Author: Sina Kamali
 *      ID:		610394126
 */

#include <iostream>

using namespace std;

int main() {
	int n;
	int number;
	//get number from user input
	cin >> n;
	for (int testCase = 1; testCase <= n; testCase++) {
		cin >> number;
		int digit = number % 10; //get rightmost digit
		//ignore zeros before the reversed number,
		//which are the rightmost digits of the original
		while (digit == 0) {
			number /= 10;
			digit = number % 10;
		}
		while (number != 0) {	//repeat until no digit left
			digit = number % 10;
			cout << digit;
			number /= 10; //remove one digit
		}
		cout << endl; //print new line at the end
	}

	return 0; //successful termination
}

