#include <stdio.h>

int main() {
	char *name;

	printf("What is your name?\n");
	gets(name);
	printf("Hello %s!  How are you!?\n", name);
	return 0;
}
