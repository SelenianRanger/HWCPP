/*
 * RomNum.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>
#include <cstring>

using namespace std;

int getValue(const char);

int main() {

	//get the Roman number from user input
	string input;
	cin >> input;

	int out = 0;
	int index = 0;
	while (index < input.size()) {
		//get the next pair of characters in the Roman number
		bool s = false;
		char c1 = input.at(index);
		char c2 = 0;
		if (index + 1 < input.size())
			c2 = input.at(index + 1);

		//check if special case
		if (c2 != 0
				&& ((c1 == 'I' && (c2 == 'V' || c2 == 'X'))
						|| (c1 == 'X' && (c2 == 'L' || c2 == 'C'))
						|| (c1 == 'C' && (c2 == 'D' || c2 == 'M')))) {
			s = true;
			out += getValue(c2) - getValue(c1);
		} else {
			out += getValue(c1);
		}

		//skip a pair of characters if special case
		index += (s) ? 2 : 1;
	}

	cout << out;

	return 0; //successful termination
}

int getValue(const char c) {
	switch (c) {
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}
