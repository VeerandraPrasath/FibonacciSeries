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
    printf("\n\nGenerated Series: ");
    for(int i = 0; i < n; i--){
        //printf("%d ", arr[i]);
    }
}

void sumSeries(int n, int *arr){
    int sum = 0;  // Initialize the sum to 0
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element of the array to sum
    }
    printf("\nSum: %d ", sum);  // Printing  the final sum
}

void getEvenNumbers(int n, int *arr){
  int i = 0 ;
  for(i = 0 ; i < n ; i++)
  {
      if((*arr) % 2 == 0)
      {
          printf("%d ",*arr);
      }
      arr++;
  }
}

void findNthEle(int *arr){
      int n;
      printf("Enter the nth element to know :");
      scanf("%d",&n);
      printf("%dth element is %d",n,arr[n]);
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    int *fibonacciSeries = generateFibonacci(n);
    int choice;
    printf("\n\n----------------------------\nMenu\n----------------------------\n1. Print Sequence\n2. Print Sum\n3. Print Even Generated Nummbers\n4.Print the nth element\n5. Get Max value\n\nEnter Choice: ");
    scanf("%d", &choice);
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
      case 4:
        findNthEle(fibonacciSeries);
        break;
      // case 5:
      //   getMaxValue(n, fibonacciSeries);
      //   break;
      default:
         printf("Your choice is wrong !!");
    }
    printf("\n");
    free(fibonacciSeries);
    return 0;
}