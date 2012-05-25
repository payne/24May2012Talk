#include <stdio.h>
#include <string.h>

void dbl(int *a); 
void normal_dbl(int *a);

int main() {
	int x=42;
	dbl(&x);
	printf("x=%d\n",x);
	normal_dbl(&x);
	printf("x=%d\n",x);
	return 0;
}

void normal_dbl(int *a) {
	//*a = 2* (*a);
	//*a*=2; 
	char *p = (char *) a;
	//strcpy(p,"I like eggs.   All kinds of eggs.  over medium is yummy...");
	char *x = NULL;
	*x = &p;
}

void dbl(int *a) {
	int value = *a; // Now value is 42
	value = value * 2;
	*a = value;
}	
