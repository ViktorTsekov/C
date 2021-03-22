#include <stdio.h>

/* This program shall print the circumference of a circle */
int main(int argc, char *argv[]) {
  int r = 4.5; 
  float circ; //pi approximated

  r = 4.5;
  circ = r * r * 3.141597;

  printf("The circumference of the circle with radius %df is %f \n", r, circ);

  return 0;
}
