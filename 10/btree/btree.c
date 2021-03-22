#include <stdio.h>
#include <stdlib.h>
#include "btree.h"

btree_t * btree_init() {
  btree_t * t = malloc(sizeof(btree_t));
  t->capacity = 0;
  t->count = 0;
  t->data = NULL;
  t->lastID = 0;
  return t;
}

void btree_free(btree_t * tree) {

  if(tree->data) {
  	free(tree->data);
  }

  printf("Memory freed");
  free(tree);
}

int btree_insert(btree_t * t, double value) {
	int newPos = t->count;
	if(newPos == t->capacity) {
		t->capacity = 2 * t->capacity + 1;
		t->data = realloc(t->data, sizeof(node_t) * t->capacity);
	}
	t->count++;
	int newID = t->lastID++;
	t->data[newPos].id = newID;
	t->data[newPos].val = value;
	return newID;
}

double btree_remove(btree_t * tree, int id) {

	for(int i = 0; i < tree->count; i++) {

		if(tree->data[i].id == id) {
			tree->count--;
			double val = tree->data[i].val;
			tree->data[i] = tree->data[tree->count];
			return val;
		}

	}

	return 0;
}

bool btree_is_empty(btree_t * tree) {

	if(tree->count == 0) {
		return true;
	}

	return false;
}

int btree_size(btree_t * tree) {
	return tree->count;
}

void print_tree(btree_t * tree) {

  for(int i = 0; i < tree->count; i++) {
    double val = tree->data[i].val;
    int ID = tree->data[i].id;
    printf("%d. %.2lf\n", ID, val);
  }

}
