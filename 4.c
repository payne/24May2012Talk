// Demo of isdigit....
#include <stdio.h>
#include <ctype.h>

#define STR_SIZE 20

int	good_phone_number(char *phone_number);

//int main(int argc, char *argv[])
int main(int argc, char **argv) {

	char phone_number[STR_SIZE+1];

	printf("Enter a phone number XXX-XXXX\n");
	fgets(phone_number, STR_SIZE, stdin);
	if (good_phone_number(phone_number)) {
		printf("Thank you!\n");
	} else {
		printf("It makes me sad that you did not enter "
						"a phone number XXX-XXXX\n");
	}

	return 0;
}

// return 0 for false!
// Looking for XXX-XXXX
int	good_phone_number(char *p) {
	int result = 1;
	result = result && isdigit(*p);
	p++;
	result = result && isdigit(*p++);
	result = result && isdigit(*p++);
	result = result && ('-' == *p++); // !isdigit(*p++);
	int i;
	for (i=0; i < 4; ++i) {
		result = result && isdigit(*p++);
	}
	return result;
}
	
