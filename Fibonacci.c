#include <stdio.h>
#include <stdlib.h>

int* generateFibonacci(int n) {
    int* fibonacciSeries = (int*)malloc(n * sizeof(int));
    if (fibonacciSeries == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    if (n > 0) fibonacciSeries[0] = 0;
    if (n > 1) fibonacciSeries[1] = 1;
    for (int i = 2; i < n; i++) {
        fibonacciSeries[i] = fibonacciSeries[i - 1] + fibonacciSeries[i - 2];
    }

    return fibonacciSeries;
}

void printSeries(int n, int *arr){
  // Yet to develop
}

int sumSeries(int n, int *arr){
  /* Should be developed by teammate 1 */
}

void getEvenNumbers(int n, int *arr){
  /* Should be developed by teammate 2 */
}


int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    int *fibonacciSeries = generateFibonacci(n);
    int choice;
    printf("\n\n----------------------------\nMenu\n----------------------------\n1. Print Sequence\n2. Print Sum\n3. Print Even Generated Nummbers\n\nEnter Choice: ");
    scanf("%d0, &choice");
    switch(choice){
      case 1: 
        printSeries(n, fibonacciSeries);
        break;
      case 2:
        sumSeries(n, fibonacciSeries);
        break;
      case 3:
        getEvenNumbers(n, fibonacciSeries);
        break;
    }
    printf("\n");
    free(fibonacciSeries);
    return 0;
}