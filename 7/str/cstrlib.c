#include <stdio.h>
#include "cstrlib.h"

 void lenghtOfString(char* str) {
  int count = 0;

  while(str[count + 1] != '\0') {
    count++;
  }

  count += 1;
  printf("%d\n", count);
}

void bytesOfString(char* str) {
 int count = 0;

 while(str[count + 1] != '\0') {
   count++;
 }

 count += 3;
 printf("%d\n", count);
}

void hashOfString(char* str) {
  unsigned long hash = 5381;
  int c = 0;

  while (c == *str++) {
      hash = ((hash << 5) + hash) + c;
  }

  printf("%lu\n", hash);
}
