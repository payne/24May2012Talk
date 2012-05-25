// strncpy demo

#include <stdio.h>
#include <string.h>

#define STR_LEN 5

int main(int argc, char *argv) {
	char str1[STR_LEN];
	char input[STR_LEN];
	char str2[STR_LEN];
	
	strncpy(str1,"I like eggs! They are yummy.",STR_LEN);
	strncpy(input, "This is some demo.  I hope it works.", STR_LEN);
	strncpy(str2,"This class is boring!",STR_LEN);
	// Silly party trick -- pointers ARE DANGEROUS!
	// NULL (\0) terminators are imporant
	input[4]='A'; // Try to clobber the '\0' at the end...
	input[5]='A'; // Try to clobber the '\0' at the end...
	input[6]='A'; // Try to clobber the '\0' at the end...
	input[7]='A'; // Try to clobber the '\0' at the end...
	input[8]='A'; // Try to clobber the '\0' at the end...
	printf("str1=%s\n", str1);
	printf("input=%s\n", input);
	printf("str2=%s\n", str2);
	return 0;
}
