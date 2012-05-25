#include <stdio.h>
#include <assert.h>

#define STR_LEN 80

int main() {
	char str[STR_LEN];
	scanf("%s", str); // NOTE!  DO NOT NEED &str since arrays are pointers
										// &str[0] -- but that's long notation for str
	assert(str==&str[0]);
	printf("str='%s'\n", str);
	return 0;
}
