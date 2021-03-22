#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

int main(int argc, char ** argv)
{
    int input = atoi(argv[1]);

    if(isPrime(input)) {
      printf("Prime number\n");
    } else {
      print_factor(input);
      printf("\n");
    }

    return 0;
}
