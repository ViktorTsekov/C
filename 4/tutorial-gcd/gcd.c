#include <stdio.h>
#include <stdlib.h>
#include "my_gcd_lib.h"

int main(int argc, char ** argv) {
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  int result = gcd(num1, num2);

  printf("%d\n", result);
  return 0;
}
