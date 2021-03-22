#include <stdio.h>
#include <stdlib.h>

/*
    We print the sum and the average of a number using goto loop
*/

int main(int argc, char ** argv) {
  float n = atoi(argv[1]);
  float sum = 0;
  float numConst = n;
  float average;

  loop: ;
  if(n != 0) {
    sum += n;
    n--;
    goto loop;
  }

  average = sum / (numConst + 1);

  printf("%.0f %.1f \n", sum, average);
}
