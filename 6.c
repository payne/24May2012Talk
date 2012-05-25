#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
	assert(argc > 0);
	char *first_bad;
	long along = strtoul(argv[1], &first_bad, 16);
	
	printf("along=%ld first bad characters are: %s\n", along, first_bad);
	return 0;
}
