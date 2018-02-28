/*
 * Tokenize.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>
#include <cstring>

using namespace std;

int toNum(const char*);

int main() {

	//input string
	char* text = new char[1000];
	cin.getline(text, 1000);

	//set delimiters
	char* delim = new char[246];
	int index = 0;
	for (int i = 1; i < 256; i++)
		if (!(i >= '0' && i <= '9')) {
			delim[index] = (char) i;
			index++;
		}

	//tokenize text
	text = strtok(text, delim);

	int sum = 0;
	while (text != NULL) {
		sum += toNum(text);
		text = strtok(NULL, delim);
	}

	cout << sum;

	return 0; //successful termination
}

int toNum(const char* text) {
	int index = 0;
	int t = 1;
	int out = 0;
	while (text[index] != '\0')
		index++;
	index--;

	while (index >= 0) {
		out += (text[index] - '0') * t;
		t *= 10;
		index--;
	}

	return out;
}

