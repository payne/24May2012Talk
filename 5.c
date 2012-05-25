#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char **argv) {
	assert(argc > 0);
	long along = atol(argv[1]);
	
	printf("along=%ld\n", along);
	return 0;
}
