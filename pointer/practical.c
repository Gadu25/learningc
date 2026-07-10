#include <stdio.h>

void swap(int *a, int *b) {
	int tempVar = *a;
	*a = *b;
	*b = tempVar;
}

void max(int *a, int *b, int *result) {
	*result = *a > *b ? *a : *b;
}

void increment_all(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		*(arr + i) += 1;
	}
}

void statistics(int *arr, int size, int *min, int *max) {
	*min = *arr;
	*max = *arr;
	for (int i = 0; i < size; i++) {
		// checking min
		if (*min > *(arr + i)) *min = *(arr + i);
		// checking max
		if (*max < *(arr + i)) *max = *(arr + i);
	}
}

int main (void) {
	int x = 5;
	int y = 10;
	int result;

	int numbers[] = { 3, 5, 8, 2, 9 };
	int size = 5;
	int statMin;
	int statMax;

	swap(&x, &y);
	max(&x, &y, &result);
	increment_all(numbers, size);
	statistics(numbers, size, &statMin, &statMax);

	printf("x value is %d, then y value now is %d\n", x, y);
	printf("Highest value is %d\n", result);

	printf("Printing the incremented values of numbers\n");
	
	for (int i = 0; i < size; i++) {
		printf("number index %d, value is %d\n", i, numbers[i]);
	}
	
	printf("The Max value of the array is %d, and the min value is %d\n", statMax, statMin);
}
