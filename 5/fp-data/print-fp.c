#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prints the binary representation
void printBinary(int n, int i)
{
    int k;

    for (k = i - 1; k >= 0; k--) {

        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }

}

typedef union
{
    float f;

    struct
    {
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;
    } raw;

} myfloat;

// Function to convert real value
// to IEEE foating point representation
void printIEEE(myfloat var)
{
    printf("%d|", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf("|");
    printBinary(var.raw.mantissa, 23);
    printf("\n");
}

void inputManager(char * inp)
{
  myfloat var;

  if (strcmp(inp, "NaN") == 0) {
    printf("0|11111111|10000000000000000000000\n");
  }
  else if (strcmp(inp, "Infinity") == 0) {
    printf("0|11111111|00000000000000000000000\n");
  } else {
    var.f = atof(inp);
    printIEEE(var);
  }

}

int main(int argc, char ** argv)
{
    char * input = argv[1];
    inputManager(input);
}
