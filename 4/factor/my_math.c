#include <stdio.h>
#include <stdbool.h>
#include "my_math.h"

bool isPrime(int num) {
  int flag = 0;
  for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            flag = 1;
            break;
        }

    }

  if(flag == 1) {
    return false;
  }

  return true;
}

void print_factor(int num) {
  int divider = 2;

  while(divider != num) {

    if(num % divider == 0) {
        printf("%d,", divider);
        num /= divider;
    } else {
      divider++;
    }

  }

  printf("%d", num);
}
