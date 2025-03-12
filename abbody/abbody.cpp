#include "myLibrary.h"

using namespace std;

int getRandomNumber(int from, int to) {
	int random = rand() % (to - from + 1) + from;

	return random;
}

void fillRandoms(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			arr[i][j] = getRandomNumber(1, 100);
		}
	}
}

int getSumOfRow(int arr[3][3], int rows, int columns) {
	int sum = 0;
	for (int i = 0; i < columns; i++) {
		sum += arr[rows][i];
	}
	return sum;
}

void getSumOfEachRow(int arr[3][3], int rows, int columns) {
	cout << "\n\nThe following are the sum of each row:\n";

	for (int i = 0; i < rows; i++) {
		printf("\nThe sum of Row %d is %d", i + 1, getSumOfRow(arr, i, columns));
	}

	
}

void printArray(int arr[3][3], int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	srand((unsigned)time(NULL));

	int arr[3][3], sum[3];

	fillRandoms(arr,3,3);
	printArray(arr,3,3);
	getSumOfEachRow(arr,3,3);

    return 0;
}
