/*
 * PrintNum.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>
#include <cstring>

using namespace std;

string name1(int);
string name2(char, char, char);

int main() {

	string number;

	//get number from user input
	cin >> number;
	int length = number.size();

	int grpCount = (length + 2) / 3 - 1;
	int index = length - (grpCount + 1) * 3;
	while (grpCount >= 0) {
		//divide number to groups of three digits
		char digit1 = (index >= 0) ? number.at(index) : '0';
		char digit2 = (index >= -1) ? number.at(index + 1) : '0';
		char digit3 = (index >= -2) ? number.at(index + 2) : '0';

		string tmp = name2(digit1, digit2, digit3);
		cout << tmp;
		if (tmp.size() != 0)
			cout << name1(grpCount);

		//next group
		index += 3;
		grpCount--;
	}

	return 0;
}

string name2(char digit1, char digit2, char digit3) {
	string out = "";
	switch (digit1) {
	case '1':
		out.append("one hundred ");
		break;
	case '2':
		out.append("two hundred ");
		break;
	case '3':
		out.append("three hundred ");
		break;
	case '4':
		out.append("four hundred ");
		break;
	case '5':
		out.append("five hundred ");
		break;
	case '6':
		out.append("six hundred ");
		break;
	case '7':
		out.append("seven hundred ");
		break;
	case '8':
		out.append("eight hundred ");
		break;
	case '9':
		out.append("nine hundred ");
		break;
	}
	if (digit2 == '1') {
		switch (digit3) {
		case '0':
			out.append("ten ");
			break;
		case '1':
			out.append("eleven ");
			break;
		case '2':
			out.append("twelve ");
			break;
		case '3':
			out.append("thirteen ");
			break;
		case '4':
			out.append("fourteen ");
			break;
		case '5':
			out.append("fifteen ");
			break;
		case '6':
			out.append("sixteen ");
			break;
		case '7':
			out.append("seventeen ");
			break;
		case '8':
			out.append("eighteen ");
			break;
		case '9':
			out.append("nineteen ");
			break;
		}
	} else {
		switch (digit2) {
		case '2':
			out.append("twenty ");
			break;
		case '3':
			out.append("thirty ");
			break;
		case '4':
			out.append("forty ");
			break;
		case '5':
			out.append("fifty ");
			break;
		case '6':
			out.append("sixty ");
			break;
		case '7':
			out.append("seventy ");
			break;
		case '8':
			out.append("eighty ");
			break;
		case '9':
			out.append("ninety ");
			break;
		}
		switch (digit3) {
		case '1':
			out.append("one ");
			break;
		case '2':
			out.append("two ");
			break;
		case '3':
			out.append("three ");
			break;
		case '4':
			out.append("four ");
			break;
		case '5':
			out.append("five ");
			break;
		case '6':
			out.append("six ");
			break;
		case '7':
			out.append("seven ");
			break;
		case '8':
			out.append("eight ");
			break;
		case '9':
			out.append("nine ");
			break;
		}
	}
	return out;
}

string name1(int power) {
	switch (power) {
	case 0:
		return "";
	case 1:
		return "thousand ";
	case 2:
		return "million ";
	case 3:
		return "billion ";
	case 4:
		return "trillion ";
	case 5:
		return "quadrillion ";
	case 6:
		return "quintillion ";
	case 7:
		return "sextillion ";
	case 8:
		return "septillion ";
	case 9:
		return "octillion ";
	case 10:
		return "nonillion ";
	case 11:
		return "decillion ";
	case 12:
		return "undecillion ";
	case 13:
		return "duodecillion ";
	case 14:
		return "tredecillion ";
	case 15:
		return "quattuordecillion ";
	case 16:
		return "quindecillion ";
	case 17:
		return "sexdecillion ";
	case 18:
		return "septendecillion ";
	case 19:
		return "octodecillion ";
	case 20:
		return "novemdecillion ";
	case 21:
		return "vigintillion ";
	case 22:
		return "unvigintillion ";
	case 23:
		return "duovigintillion ";
	case 24:
		return "trevigintillion ";
	case 25:
		return "quattuorvigintillion ";
	case 26:
		return "quinvigintillion ";
	case 27:
		return "sexvigintillion ";
	case 28:
		return "septenvigintillion ";
	case 29:
		return "octovigintillion ";
	case 30:
		return "novemvigintillion ";
	case 31:
		return "trigintillion ";
	}
}
