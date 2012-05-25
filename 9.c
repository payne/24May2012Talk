// My implementation of the cat program! 
// Use: ./a.out 9.c

#include <stdio.h>
#include <assert.h>

int main(int argc, char *argv[]) {
	assert(argc > 0);
	FILE *fd = fopen(argv[1], "r"); // man fopen
	char demo = EOF; 
	assert(EOF == demo); // On many systems this will fail.
	// Here's another demo of data loss...
	int a=37000;
	demo = a;
	printf("demo=%d\n", demo);
	assert(a==demo);
	assert(37000==demo);
	int c;
	while (EOF != (c = fgetc(fd))) {
		putc(c,stdout);
	}

	fclose(fd);
	return 0;
}
