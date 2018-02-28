/*
 * Alphabet.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>

using namespace std;

int main() {

	string chars[] = { "", "a", "b", "j", "d", "h", "v", "z", "t", "y", "k",
			"l", "m", "n", "s", "\'a", "f", "q", "r", "sh", "x" };
	int values[] = { 0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 20, 30, 40, 50, 60, 70, 80,
			100, 200, 300, 600 };

	int sum;

	cin >> sum;

	for (int i = 1; i < 21; i++) {
		for (int j = 0; j < 21; j++) {
			for (int k = 0; k < 21; k++) {
				for (int l = 0; l < 21; l++) {
					for (int m = 0; m < 21; m++) {
						if (values[i] + values[j] + values[k] + values[l]
								+ values[m] == sum) {
							if (j != 0 || k == 0 && l == 0 && m == 0)
								if (k != 0 || l == 0 && m == 0)
									if (l != 0 || m == 0)
										cout << chars[i] << chars[j] << chars[k]
												<< chars[l] << chars[m] << endl;
						}
					}
				}
			}
		}
	}

	return 0;
}

