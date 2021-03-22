#include <stdio.h>
#include "table.h"

int main() {
  lookupTbl_t tbl;
  void* val;
  tbl_init(&tbl);
  tbl_set(&tbl, 0, 0, (void*) 9);
  tbl_set(&tbl, 3, 5, (void*) 1267);
  val = tbl_get(&tbl, 0, 0);
  print_matrix(&tbl);
  printPtr(val);
  return 0;
}
