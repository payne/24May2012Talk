#include <stdio.h>
#include <string.h>
#include <assert.h>

int boring_implementaiton_of_isvowel(char letter) {
	int result=0;
	switch (letter) {
		case 'a':
			result=1;
			break;
		case 'A':
			result=1;
			break;
		// etc really boring long code....
	}	
	return result;
}

int isvowel(char letter) {
	return (int) strchr("aieouAIEOU", letter);
}

int main() {
	assert(isvowel('A'));
	assert(isvowel('I'));
	assert(isvowel('e'));
	return 0;
}
