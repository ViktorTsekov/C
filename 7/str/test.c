#include <stdio.h>
#include <string.h>
#include "cstrlib.h"

/*
	Enter L to get the lenght of  a string
	Enter B to get the bytes of a string 
	Enter H to get the hashcode of a string
	
	And proceed by entering the string
	Ex: L abcde
	Out: 5
*/

void operationManager(char* op, char* inp) {

  if(strcmp(op, "L") == 0) {
    lenghtOfString(inp);
    //testing the lenght function
  } else if (strcmp(op, "B") == 0) {
    bytesOfString(inp);
    //testing the bytes function
  } else if (strcmp(op, "H") == 0) {
    //testing the hash function
    hashOfString("Invalid input\n");
  } else {
    printf("Invalid input\n");
  }

}

int main(int argc, char ** argv) {
  char* operation;
  char* inp;

  if(argc >= 2) {
    operation = argv[1];
    inp = argv[2];

    operationManager(operation, inp);
  } else {
    printf("Not enough arguments\n");
  }

}
