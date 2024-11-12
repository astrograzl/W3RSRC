#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>

static void direct_using(const char *path) {
	struct dirent *context;
	DIR *dir = opendir(path);
	if (dir == NULL) return;
	while ((context = readdir(dir)) != NULL)
		printf("%s\n", context->d_name);
	closedir(dir);
}

int main(void) {
	direct_using(".");
	return EXIT_SUCCESS;
}
