#include <stdio.h> // preprocessor directory <Standard I/O>

int main(void) {
	// int i; // Holds signed integers, e.g. -3, -2, 0, 1, 10
	// float f; // Holds signed floating point numbers, e.g. -3.1416
	//
	// i = 2;
	// f = 3.14;
	//
	// char *s = "Hello, world!"; // char * ("char pointer") is the string type
	//
	// printf("%s i = %d and f = %f!\n", s, i, f);
	

	// // sizeOf
	// int a = 999;
	//
	// printf("%zu\n", sizeof a); // prints 4 on my system
	// printf("%zu\n", sizeof(2+7)); // prints 4 on my system
	// printf("%zu\n", sizeof 3.14); // prints 8 on my system
	//
	// // if you need to print size of negative value use %zd
	

	// // conditional statements
	// int i = 100;
	//
	// if (i == 10) {
	// 	printf("i is 10!\n");
	// } else if (i == 20) {
	// 	printf("i is 20!\n");
	// } else if (i == 99) {
	// 	printf("i is 99! My favorite\n");
	// 	printf("I can tell you how happy I am.\n");
	// 	printf("Really\n");
	// } else {
	// 	printf("i is some crazy number dawg, I never heard of it before\n");
	// }


	// // while statement
	// int i = 10;
	//
	// printf("Let's do a count down!\n");
	//
	// while (i > 0) {
	// 	printf("%d\n", i);
	// 	i--;
	// }
	//
	// printf("All done! Noice\n");
	//
	// // for loop
	// printf("Let's do a count down, again!\n");
	// for (i = 10; i > 0; i--) {
	// 	printf("%d\n", i);
	// }
	// printf("All done again! Noice\n");

	// switch case example
	int num = 9;

	switch (num % 2) {
		case 0:
			printf("Number is even\n");
			break;
		default:
			printf("Number is odd\n");
			break;
	}
}
