#include <stdio.h>

int main(int argc, char **argv) {
	int c;
	while (EOF != (c=getc(stdin))) {
		putc(c,stdout);
	}
	return 0;
}	
