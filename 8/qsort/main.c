#include <stdio.h>
#include <stdlib.h>
#include "qsort.h"

int main(int argc, char **argv) {

	if(argc == 1) {
		return 0;
	}

	int array[argc];
	for (int i = 1; i < argc; i++)
	{
		array[i - 1] = atoi(argv[i]);
	}

	mqsort(array, argc - 1);

	for (int i = 0; i < argc - 1; i++)
	{
    printf("%d ", array[i]);
	}

	printf("\n");
	return 0;
}
