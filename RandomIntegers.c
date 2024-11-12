#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	printf("%i\n", RAND_MAX);
	for (int i = 0; i < 1; i++)
		printf("%d\t", rand());
	return EXIT_SUCCESS;
}
