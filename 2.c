#include <stdio.h>
#include <assert.h>

#define STR_LEN 8

int main() {
	int a=1,b=2;
	char str[STR_LEN];
	int c=3,d=4;
	printf("a=%d b=%d c=%d d=%d\n", a,b,c,d);
	gets(str);
	printf("a=%d b=%d c=%d d=%d\n", a,b,c,d);
	assert(str==&str[0]);
	printf("str='%s'\n", str);
	return 0;
}
