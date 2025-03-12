#include "myLibrary.h"

using namespace std;

int getRandomNumber(int from, int to) {
	int random = rand() % (to - from + 1) + from;

	return random;
}

void fillArray(int arr[3][3], int rows, int columns) {
	int num = 1;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = num++;
		}
	}
}

int getSumOfColumn(int arr[3][3], int rows, int columns) {
	int sum = 0;

	for (short i = 0; i < rows; i++) {
		sum += arr[i][columns];
	}

	return sum;
}

void getSumOfEachColumn(int arr[3][3], int arr2[3], int rows, int columns) {
	cout << "\n\nHere is sum of each column in the array:\n";

	for (short i = 0; i < columns; i++) {
		arr2[i] = getSumOfColumn(arr, 3, i);
		printf("\nSum of column %d is %d", i + 1,arr2[i]);
	}

}


void print2dArray(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void print1dArray(int arr[3], int size) {
	for (short i = 0; i < size; i++) {
		cout << setw(3) << arr[i] << "  ";
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr[3][3], sum[3];

	fillArray(arr, 3, 3);
	
	cout << "\n2D Array:\n";
	print2dArray(arr, 3, 3);
	getSumOfEachColumn(arr, sum,3, 3);
	cout << "\n\n1D Array:\n";
	print1dArray(sum, 3);
	cout << endl;
	cout << endl;
	return 0;
}
