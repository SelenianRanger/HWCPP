/*
 * OctOperation.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>

using namespace std;

int main() {

	//input the two numbers
	string num1, num2;
	cin >> num1 >> num2;

	char* octNum1 = toOct(num1);
	char* octNum2 = toOct(num2);



	return 0; //successful termination
}

