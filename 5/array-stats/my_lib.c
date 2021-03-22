#include <stdio.h>
#include <math.h>
#include "my_lib.h"

double mean(int arr[], int n) {
    int count = n - 2;
    int sum = 0;
    double average;

    for(int i = 2; i < n; i++) {
      sum += arr[i];
    }

    average = (double) sum / count;
    return average;
}

int max(int arr[], int n) {
    int max = 0;

    for(int i = 2; i < n; i++) {

      if(max < arr[i]) {
        max = arr[i];
      }

    }

    return max;
}

double sd(int arr[], int n) {
  double av = mean(arr, n);
  double newArr[50];
  double deviation;
  double variance;
  double sum = 0;
  int count = n - 2;

  for(int i = 2; i < n ; i++) {
    newArr[i] = (arr[i] - av) * (arr[i] - av);
  }

  for(int i = 2; i < n ; i++) {
    sum += newArr[i];
  }

  variance = (double) sum / count;
  deviation = sqrt(variance);

  return deviation;
}
