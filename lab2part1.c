#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 1000

void readInput(int arr[], int *nPtr);
void printNumbers(const int arr[], int n);

int main()
{

    int arr[SIZE];
    int n;

    readInput(arr, &n);
    printNumbers(arr, n);

    return 0;
}

// reads numbers from the standard input into
// arr,and stores the number of elements read in
// the memory cell pointed to by nPtr
void readInput(int arr[], int *nPtr) {
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    *nPtr = n;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

// prints  the elements  in arr[0..(n-1)]
void printNumbers(const int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
