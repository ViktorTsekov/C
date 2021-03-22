#include <stdio.h>
#include "my_conversion.h"

int my_atoi(char * num)
{
  int numConverted = 0;
  int sign = 1;
  int i = 0;

  if (num[0] == '-')
  {
    sign = -1;
    i++;
  }

  for (; num[i] != '\0'; ++i) {
    numConverted = numConverted * 10 + num[i] - '0';
  }

  return numConverted * sign;
}
