#include <stdio.h>
#include "my_gcd_lib.h"

int gcd(int x, int y) {
  int dev;
  int flag = 0;

  if(x > y) {
    dev = y;
  } else if(x < y) {
    dev = x;
  }

  while(flag != 1) {

    if(x % dev == 0 && y % dev == 0) {
      flag = 1;
    } else {
      dev--;
    }

  }

  return dev;
}
