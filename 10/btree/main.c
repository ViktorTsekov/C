#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

int main() {
  btree_t * tree = btree_init();
  btree_insert(tree, 2.4);
  btree_insert(tree, 8.5);
  btree_insert(tree, 4.5);
  btree_insert(tree, 3.2);
  printf("Value %.2lf is removed\n", btree_remove(tree, 2));
  printf("The size of the tree is: %d\n", btree_size(tree));
  print_tree(tree);
  btree_free(tree);
}
