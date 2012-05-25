// strncpy demo

#include <stdio.h>
#include <string.h>

#define STR_LEN 5

int main(int argc, char *argv) {
	char str1[]="I like eggs! They are yummy.";
	char input[STR_LEN];
	char str2[]="This class is boring!";
	
	strncpy(input, "This is some demo.  I hope it works.", STR_LEN);
	printf("str1=%s\n", str1);
	printf("input=%s\n", input);
	printf("str2=%s\n", str2);
	return 0;
}
