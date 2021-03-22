#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_lib.h"

void inputManager(char * inp, int arr[], int n) {

  if (strcmp(inp, "mean") == 0) {
    printf("%.1f\n", mean(arr, n));
  }
  else if (strcmp(inp, "max") == 0) {
    printf("%d\n", max(arr, n));
  } else if (strcmp(inp, "sd") == 0) {
    printf("%.1f\n", sd(arr, n));
  } else {
    printf("Invalid input\n");
  }

}

int main(int argc, char ** argv) {
    int i = 2;
    int arr[50];
    char * operation = argv[1];

    while(argv[i] != NULL)
    {
        arr[i] = atoi(argv[i]);
        i++;
    }

    inputManager(operation, arr, i);
}
