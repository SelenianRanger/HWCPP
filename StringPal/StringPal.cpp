/*
 * StringPal.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkPal(string, int, int);

int main() {

	string str;
	cin >> str;

	vector<string> palStrs(0);

	for (int i = 0; i < str.size(); i++) {
		for (int j = i; j < str.size(); j++) {
			if (checkPal(str, i, j))
				palStrs.push_back(str.substr(i, j - i + 1));
		}
	}

	sort(palStrs.begin(), palStrs.end());

	for (int i = 0; i < palStrs.size(); i++)
		cout << palStrs.at(i) << endl;

	return 0; //successful termination
}

bool checkPal(string str, int i, int j) {
	while (i <= j) {
		if (str.at(i) != str.at(j))
			return false;
		i++;
		j--;
	}

	return true;
}
