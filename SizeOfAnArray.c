#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "SizeOf.h"

static const int arr[] = {11, 22, 33, 44, 55, 66};

int main(void) {
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("# %d %d\n", (int) ARRAYSIZE(arr), len);
    for (size_t i = 0; i < ARRAYSIZE(arr); i++)
    	printf("%d\t%d\n", (int) i, arr[i]);
    return EXIT_SUCCESS; // false
}
