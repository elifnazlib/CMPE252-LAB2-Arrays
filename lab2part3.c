#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000


void readInput(int arr[], int *nPtr);
void printNumbers(const int arr[], int n);
void countSmallerArray(const int arr[], int n, int csmallerArr[]);


int main() {
        int arr[SIZE];
        int n;
        int csmallerArr[SIZE];
        readInput(arr, &n);
        printNumbers(arr, n);
		countSmallerArray(arr, n, csmallerArr);
		printf("Count Smaller ");
		printNumbers(csmallerArr, n);

        return 0;
}

void countSmallerArray(const int arr[], int n, int csmallerArr[]) {
int count = 0;
    for (int i = 0; i < n; i++) {
        for (int k = i+1; k < n; k++) {
            if (arr[k] < arr[i])
                count++;
        }
        csmallerArr[i] = count;
        count = 0;
    }

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
