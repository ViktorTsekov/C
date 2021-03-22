#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "table.h"

void tbl_init(lookupTbl_t * tbl) {

  for(int i = 0; i < 10; i++) {

    for(int j = 0; j < 10; j++) {
      tbl->mat[i][j] = NULL;
    }

  }

}

void tbl_set(lookupTbl_t * tbl, int x, int y, void* value) {
  tbl->mat[x][y] = value;
}

void* tbl_get(lookupTbl_t * tbl, int x, int y) {
  return tbl->mat[x][y];
}

void printPtr(void* ptr) {
  char buff[15];
  int len = sprintf(buff, "%p", ptr);

  for(int i = 15 - len; i >= 0; i--) {
    printf(" ");
  }

  printf("%s", buff);
}

void print_matrix(lookupTbl_t* tbl) {

  for(int i = 0; i < 10; i++) {

    for(int j = 0; j < 10; j++) {
      printPtr(tbl->mat[i][j]);
    }

  }

}
