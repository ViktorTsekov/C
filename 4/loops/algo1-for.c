#include <stdio.h>
#include <stdlib.h>

/*
    We print the sum and the average of a number using for loop
*/

int main(int argc, char ** argv) {
  float n = atoi(argv[1]);
  float sum = 0;
  float average;

  for(int i = 0; i <= n; i++) {
    sum += i;
  }

  average = sum / (n + 1);

  printf("%.0f %.1f \n", sum, average);
}
