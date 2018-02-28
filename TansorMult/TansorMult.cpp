/*
 * TansorMult.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>

using namespace std;

int main() {

	//input first matrix
	int n, m;
	cin >> n >> m;

	int** matrix1 = new int*[n];
	for (int j = 0; j < n; j++)
		matrix1[j] = new int[m];

	for (int j = 0; j < n; j++)
		for (int i = 0; i < m; i++)
			cin >> matrix1[j][i];

	//input second matrix
	int u, v;
	cin >> u >> v;

	int** matrix2 = new int*[u];
	for (int j = 0; j < u; j++)
		matrix2[j] = new int[v];

	for (int j = 0; j < u; j++)
		for (int i = 0; i < v; i++)
			cin >> matrix2[j][i];

	//print Tansor multiple
	for (int j = 0; j < n * u; j++) {
		for (int i = 0; i < m * v; i++) {
			cout << matrix1[j / u][i / v] * matrix2[j % u][i % v] << " ";
		}
		cout << endl;
	}

	return 0; //successful termination
}

