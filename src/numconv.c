#include <stdio.h>
#include <string.h>
#include "numconv.h"

int main(int argc, char** argv) {
	if (argc < 2) {
		print_error(-1);
		return 1;
	}
	conversion_router(arg_parser(argv[1]), argc, argv);

	return 0;
}



int arg_parser(const char* input) {
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

void print_error(int input) {
	switch(input) {
		case -1:
			printf("Argument error! Usage: numconv [-h] [-d] [-x] [-b] [-rgb] [-xrgb] [number(s) to convert]\n");
			break;

		case 0:
			printf("Usage: numconv [-h] [-d] [-x] [-b] [-rgb] [-xrgb] [number(s) to convert]\n");
			break;
		
		case 1:
			printf("Argument error! Usage: numconv -d [integer]\n");
			break;
			
		case 2:
			printf("Argument error! Usage: numconv -x [hex number (i.e. 0xCE5)]\n");
			break;
		
		case 3:
			printf("Argument error! Usage: numconv -b [binary number]\n");
			break;
		
		case 4:
			printf("Argument error! Usage: numconv -rgb [r value (0-255)] [g value (0-255)] [b value (0-255)]\n");
			break;

		case 5:
			printf("Argument error! Usage: numconv -xrgb [hex rgb value (i.e. #FFFFFF)]\n");
			break;
	}

}

void conversion_router(int input, int argc, char** argv) {
	switch(input) {
		case -1:
		case 0:
			print_error(input);
			return;

		case 1:
			if (argc != 3) {
				print_error(input);
				return;
			}	
		case 2:
			if (argc != 3) {
				print_error(input);
				return;
			}	
		case 3:
			if (argc != 3) {
				print_error(input);
				return;
			}	
		case 4:
			if (argc != 5) {
				print_error(input);
				return;
			}	
		case 5:
			if (argc != 3) {
				print_error(input);
				return;
			}	
	}
}
