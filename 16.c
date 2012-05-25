#include <stdio.h>
#include <string.h>
#include <assert.h>

#define STR_SIZE 80

int sum_csv(char str[]);

int main(int argc, char *argv[]) {

	char data[STR_SIZE];
	strcpy(data,"11,12;13;,14"); // Now it's not a constant string
	int sum=sum_csv(data);
	assert(sum==11+12+13+14);
	return 0;
}

int sum_csv(char str[]) {
	// Could use strchr to find the commas... 
	// Easier to use strtok
	int sum=0;
	printf("Processing: '%s' sum=%d\n", str, sum);
	char seperators[]=";,";
	//char *cp = strtok(str, seperators); // Should return "11"
	char *cp;
	cp = strtok(str, ","); // Should return "11"
	sum += atoi(cp);
	while (NULL != cp) {
		printf("Processing: '%s' sum=%d\n", str, sum);
		cp = strtok(NULL, seperators); // Should return "11"
		if (NULL != cp) {
			sum += atoi(cp);
		}
	}

	return sum;
}
