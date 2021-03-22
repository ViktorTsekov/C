#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int findSum(int n) {
    int sum = 0;

    for(int i = 1; i <= n; i++) {
      sum += i;
    }

    return sum;
}

int findSumRec(int n) {

    if (n == 0) {
      return 0;
    } else {
      return n + findSumRec(n - 1);
    }

}

int cmp(int n)
{
  char str[n];

  while(i != n) {
    str[i] = 'A';
    i++;
  }

  str[i] = '\0';
  return strcmp(str, str);
}

int main(int argc, char ** argv)
{
  int arrayOfInputs[50];
  int result = 0;
  int i = 1;
  int currentInput;
  double timeSpentForSum;
  double timeSpentForSumRec;
  double timeSpentForCmp;
  clock_t begin;
  clock_t end;

  while(argv[i] != NULL)
  {
    arrayOfInputs[i - 1] = atoi(argv[i]);
      i++;
  }

  printf("n, for loop, recursive, strcmp\n");

  for(int j = 0; j < i - 1; j++) {
    currentInput = arrayOfInputs[j];

    begin = clock();
    result = findSum(currentInput);
    end = clock();
    timeSpentForSum = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    begin = clock();
    result = findSumRec(currentInput);
    end = clock();
    timeSpentForSumRec = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    begin = clock();
    result = cmp(currentInput);
    end = clock();
    timeSpentForCmp = (double)(end - begin) / CLOCKS_PER_SEC * 1e9;

    printf("%d, %.0lf, %.0lf, %.0lf\n", currentInput, timeSpentForSum, timeSpentForSumRec, timeSpentForCmp);
  }

  result -= result;
  return 0;
}
