#include <stdio.h>
#include <string.h>
#include "numconv.h"

int main(int argc, char** argv) {
	printf("%d\n", argParser(argv[1]));
	return 0;
}



int argParser(const char* input) {
	if (strcmp(input, "-h") == 0) {
		return 0;
	}

	if (strcmp(input, "-d") == 0) {
		return 1;
	}

	if (strcmp(input, "-x") == 0) {
		return 2;
	}
	
	if (strcmp(input, "-b") == 0) {
		return 3;
	}

	if (strcmp(input, "-rgb") == 0) {
		return 4;
	}

	if (strcmp(input, "-xrgb") == 0) {
		return 5;
	}

	return -1;
}
