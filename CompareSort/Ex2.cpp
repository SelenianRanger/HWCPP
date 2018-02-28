/*
 * Ex2.cpp
 *
 *      Author: Sina Kamali
 *      ID: 610394126
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void bubbleSrt(int*, int);
void exchangeSrt(int*, int);
void selectionSrt(int*, int);
void insertionSrt(int*, int);
void shellSrt(int*, int);

int main() {

	srand(time(0));

	int n = rand() % 1000 + 1; //random array length between 1 and 1000
	int* array = new int[n];

	//fill array with random integers
	for (int i = 0; i < n; i++) {
		array[i] = rand();
		cout << array[i] << " ";
	}
	cout << endl << "--------------------------" << endl;

	void (*sortFunc)(int*, int);

	for (int i = 0; i < 5; i++) {
		switch (i) {
		case 0:
			sortFunc = bubbleSrt;
			cout << "bubble sort: ";
			break;
		case 1:
			sortFunc = exchangeSrt;
			cout << "exchange sort: ";
			break;
		case 2:
			sortFunc = selectionSrt;
			cout << "selection sort: ";
			break;
		case 3:
			sortFunc = insertionSrt;
			cout << "insertion sort: ";
			break;
		case 4:
			sortFunc = shellSrt;
			cout << "shell sort: ";
			break;
		}

		//sort the array
		clock_t before, after;
		before = clock();
		sortFunc(array, n);
		cout << (int) ((double) before * 1000 / CLOCKS_PER_SEC) << endl;

	}

	return 0; //successful termination
}

void bubbleSrt(int* array, int size) {
	int tmp = 0;
	for (int pass = size - 1; pass >= 0; pass--) {
		for (int i = 0; i < pass; i++) {
			if (array[i] > array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
}

void exchangeSrt(int* array, int size) {
	int tmp = 0;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (array[i] > array[j]) {
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

void selectionSrt(int* array, int size) {
	int tmp = 0;
	int min;
	for (int i = 0; i < size - 1; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
	}
}

void insertionSrt(int* array, int size) {
	int tmp = 0;
	int j;
	for (int i = 1; i < size; i++) {
		tmp = array[i];
		j = i;
		while (j > 0 && array[j - 1] > tmp) {
			array[j] = array[j - 1];
			j--;
		}
		array[j] = tmp;
	}
}

void shellSrt(int* array, int size) {
	int tmp = 0;
	for (int g = size / 2; g > 0; g /= 2) {
		for (int i = g; i < size; i++) {
			for (int j = i - g; j >= 0 && array[j] > array[j + g]; j -= g) {
				tmp = array[j];
				array[j] = array[j + g];
				array[j + g] = tmp;
			}
		}
	}
}
