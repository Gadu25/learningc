#include <stdio.h>

int main (void) {
	int x[12]; // 12 ints

	printf("%zu\n", sizeof x);
	printf("%zu\n", sizeof(int));

	printf("array size is %zu\n", sizeof x / sizeof(int));
}
