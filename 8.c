#include <stdio.h>

#define STR_LEN 22

int main() {
	char name[STR_LEN+1];

	printf("What is your name?\n");
	gets(name);
	printf("Hello %s!  How are you!?\n", name);
	return 0;
}
