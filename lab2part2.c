#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 1000


void readInput(int arr[], int *nPtr);
void printNumbers(const int arr[], int n);
void findMeanVar(const int arr[], int n, double *meanPtr, double *varPtr);

int main() {
        int arr[SIZE];
        int n;
        double mean, var;

        readInput(arr, &n);
        printNumbers(arr, n);
		findMeanVar(arr, n, &mean, &var);
		printf("Mean of all elements = %.2lf\n", mean);
		printf("Variance of all elements = %.2lf\n", var);

        return 0;
}

void findMeanVar(const int arr[], int n, double *meanPtr, double *varPtr) {
    double total1 = 0;
    double total2 = 0;

    for (int i = 0; i < n; i++) {
        total1 = total1 + arr[i];
    }
    *meanPtr = total1 / n;

    for (int i = 0; i < n; i++) {
        total2 = total2 + pow((arr[i] - *meanPtr), 2);
       // (arr[i] - *meanPtr)*(arr[i] - *meanPtr);
    }
    *varPtr = total2 / n;

}

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

void printNumbers(const int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
