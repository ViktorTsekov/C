#include <stdio.h>
#include "my_conversion.h"

int add(int num1, int num2) {
  return num1 + num2;
}

int main(int argc, char ** argv)
{
    char * num1 = argv[1];
    char * num2 = argv[2];
    int sum = add(my_atoi(num1), my_atoi(num2));

    printf("%d\n", sum);
    return 0;
}
