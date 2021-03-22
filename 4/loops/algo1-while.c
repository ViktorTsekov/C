#include <stdio.h>
#include <stdlib.h>

/*
    We print the sum and the average of a number using while loop
*/

int main(int argc, char ** argv) {
  float n = atoi(argv[1]);
  float sum = 0;
  float numConst = n;
  float average;

  while(n != 0) {
    sum += n;
    n--;
  }

  average = sum / (numConst + 1);

  printf("%.0f %.1f \n", sum, average);
}
