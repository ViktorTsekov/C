#include <stdio.h>
#include <stdlib.h>

int binary[64];
int isNegative = 0;

void decToBinary(int number) {
  int i = 0;

  while(number > 0) {
    binary[i] = number % 2;
    number = number / 2;
    i++;
  }

}

void print() {

  for(int i = 7; i >= 0; i--) {
    printf("%d", binary[i]);
  }

}

void turnNegative() {
  int bit;
  int remainder;

  for(int i = 7; i >= 0; i--) {
    bit = binary[i];

    switch(bit) {
      case 0: binary[i] = 1; break;
      case 1: binary[i] = 0; break;
    }

  }



}

int add(int x, int y) {

  while(y != 0) {
    int carry = x & y;
    x = x ^ y;
    y = carry << 1;
  }

  return x;
}

int subtract(int x, int y) {
  int temp;

  if(x < y) {
    temp = x;
    x = y;
    y = temp;
    isNegative = 1;
  }

  y = ~y + 1;

  while(y != 0) {
    int carry = x & y;
    x = x ^ y;
    y = carry << 1;
  }

  if(isNegative == 1) {
    x = x - 1;
  }

  return x;
}

int main(int argc, char ** argv) {
  int dec1 = atoi(argv[1]);
  int dec2 = atoi(argv[3]);
  int result;
  char operation = argv[2][0];

  switch(operation) {
    case '+': result = add(dec1, dec2); break;
    case '-': result = subtract(dec1, dec2); break;
  }

  decToBinary(result);

  if(isNegative == 1) {
    turnNegative(result);
  }

  print();
  printf("\n");
  return 0;
}
