#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int main(void) {
	int a = 10, b = 7;
	printf("We got two numbers to add %d and %d\n", a, b);
	
	printf("And the answer is: %d\n", add(a,b));
}
