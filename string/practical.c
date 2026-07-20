#include <stdio.h>

int my_strlen(char *s) {
	int count = 0;

	while(s[count] != '\0') {
		count++;
	}
	
	return count;
}

int my_strcpy(char *dest, const char *src) {

}

int my_strcmp(const char *a, const char *b) {

}

int main (void) {
	char *word = "Angry";

	int count = my_strlen(word);

	printf("word length is %d\n", count);
}
