#include <stdio.h>
#define COUNT 20 // constant expression

int main (void) {
	int x[COUNT] = {20, [14] = 15, 16, 17, 18, 19, 20};

	for (int i = 0; i <20; i++) {
		printf("%d\n", x[i]);
	}


	printf("\nPRINTING OUT OF BOUNDS\n");

	for (int i = 0; i <40; i++) {
		printf("%d\n", x[i]);
	}
}
