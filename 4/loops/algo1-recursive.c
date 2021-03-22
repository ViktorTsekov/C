#include <stdio.h>
#include <stdlib.h>

/*
    We print the sum and the average of a number using the recursive function @sumRec(int n)
*/

float sum = 0;

void sumRec(int n) {

  if(n != 0) {
    sum += n;
    sumRec(n - 1);
  }
  
}

int main(int argc, char ** argv) {
  float n = atoi(argv[1]);
  float average;

  sumRec(n);
  average = sum / (n + 1);

  printf("%.0f %.1f\n", sum, average);
}
