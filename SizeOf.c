#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#include "SizeOf.h"

#define LEN 256

int main(void) {

	char c = 'c';

	short t = '5';
	int i = INT_MAX;
	long l = LONG_MAX;
	long long ll = LLONG_MAX;

	float f = 123.456e9f;
	double d = f * f;
	long double ld = d * d;

	const char *hello = "Hello, World!\0";
	const char *p = hello;

	typedef struct {
		char c;
		int i;
		float f;
		char *str;
		struct data *link;  
	} data;
	
	printf("#. \t Type \t Byte \n"/*Size_Of*/);
	printf("0. \t Char \t %zx  \n", sizeof(c));
	printf("1. \t Short\t %zx  \n", sizeof(t));
	printf("2. \t Int  \t %zx  \n", sizeof(i));
	printf("3. \t Long \t %zx  \n", sizeof(l));
	printf("4. \t LLong\t %zx  \n", sizeof(ll));
	printf("5. \t Float\t %zx  \n", sizeof(f));
	printf("6. \t Doubl\t %zx  \n", sizeof(d));
	printf("7. \t LDoub\t %zx  \n", sizeof(ld));
	printf("8. \t Pontr\t %zx  \n", sizeof(p));
	printf("9. \t Strng\t %zx  \n", sizeof(&hello));
	printf("10.\t Data \t %zx  \n", sizeof(data));

	return EXIT_SUCCESS;
}
