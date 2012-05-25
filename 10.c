#include <stdio.h>
#include <string.h>

#define STR_SIZE 90

int main(int argc, char *argv[]) {
	char dest[STR_SIZE];
	int len=sprintf(dest, "The params are %s, %s, %s\n", argv[0],
		 argv[1], argv[2]);
	printf("len=%d strlen(dest)=%d\n", len, strlen(dest));
	puts(dest);
	return 0;
}

