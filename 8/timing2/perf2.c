#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mall(int n, int* array) {

  for(int i = 0; i < n; i++) {
    array[i] = i;
  }

}

void freeMem(int* array) {
  free(array);
}

void callByValue(int n) {
  int j = n;

  for(int i = 0; i < j; i++) {
    n++;
  }

}

void callByReference(int* n) {
  int j = *n;

  for(int i = 0; i < j; i++) {
    *n++;
  }

}

int main(int argc, char ** argv) {
  int* ptr;
  int currentVariable;
  int currentVariablRef;
  double timeSpentForMall;
  double timeSpentForSumFreeMem;
  double timeSpentForVal;
  double timeSpentForRef;
  clock_t begin;
  clock_t end;

  printf("n, malloc, free, callbyvalue, callbyreference\n");

  for(int i = 1; i < argc; i++) {
    currentVariable = atoi(argv[i]);
    ptr = (int*)malloc(currentVariable * sizeof(int));

    begin = clock();
    mall(currentVariable, ptr);
    end = clock();
    timeSpentForMall = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    begin = clock();
    freeMem(ptr);
    end = clock();
    timeSpentForSumFreeMem = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    begin = clock();
    callByValue(currentVariable);
    end = clock();
    timeSpentForVal = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    begin = clock();
    currentVariablRef = currentVariable;
    callByReference(&currentVariablRef);
    end = clock();
    timeSpentForRef = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    printf("%d, %.0lf, %.0lf, %.0lf, %.0lf\n", currentVariable, timeSpentForMall, timeSpentForSumFreeMem, timeSpentForVal, timeSpentForRef);
  }

}
