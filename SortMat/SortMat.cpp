/*
 * SortMat.cpp
 *
 *      Author: Sina Kamali
 *      ID:		610394126
 */

#include <iostream>

using namespace std;

void sort(int**, const int, const int);
void swap(int**, const int, const int);

void printMatrix(int**, const int);

int main() {

	int size;
	int col;

	//get matrix dimensions and the column number
	cin >> size >> col;

	//allocate memory for the matrix
	int** matrix = new int*[size];
	for (int i = 0; i < size; i++)
		matrix[i] = new int[size];

	//fill matrix from user input
	for (int j = 0; j < size; j++)
		for (int i = 0; i < size; i++)
			cin >> matrix[j][i];

	sort(matrix, col, size); //sort the matrix rows according to column col's elements

	printMatrix(matrix, size);

	return 0; //successful termination
}

void sort(int** matrix, const int col, const int size) {
	//insertion sort
	for (int run = 1; run < size; run++) {
		for (int row = run; row > 0 && matrix[row][col] < matrix[row - 1][col];
				row--) {
			swap(matrix, row, row - 1);
		}
	}
}

void swap(int** matrix, const int i, const int j) {
	//swap the two rows
	int* tmp = matrix[j];
	matrix[j] = matrix[i];
	matrix[i] = tmp;
}

void printMatrix(int** matrix, const int size) {
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

