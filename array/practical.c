#include <stdio.h>

void printArr(int arr[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d\n", arr[i][j]);
		}
	}
}

void reverse(int arr[3][3]) {
	int tmpArr[3][3];
	int row, col;
	int tmpRow = 0, tmpCol = 0;

	for(row = 2; row >= 0; row--) {
		for (col = 2; col >= 0; col--) {
			tmpArr[tmpRow][tmpCol] = arr[row][col];
			tmpCol++;
		}
		tmpCol = 0;
		tmpRow++;
	}
	
	printf("Printing tmpArr\n");
	printArr(tmpArr);

	for(row = 0; row < 3; row++) {
		for (col = 0; col < 3; col++) {
			arr[row][col] = tmpArr[row][col];
		}
	}
}

int main (void) {
	int arr[3][3] = {
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};

	printf("Printing regular\n");
	printArr(arr);
	reverse(arr);
	printf("Printing reversed\n");
	printArr(arr);
}
