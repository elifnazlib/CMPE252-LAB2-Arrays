# CMPE 252 C Programming

## Lab 2

### Part 1

In this part, you will write a program which involves implementation of the following two functions:

<br>

/\* reads numbers from the standard input into arr, and stores the number of elements read in the memory cell pointed to by nPtr \*/

**void readInput(int arr[], int \*nPtr);**  

<br>

/\* prints the elements in arr[0..(n-1)] \*/

**void printNumbers(const int arr[], int n);** 

<br>

First, define a constant macro named **SIZE** with the value **1000**.

<br>

In main function, you will create an array and print the elements of the array as follows:

- Define an integer array with the size **SIZE**

- Call **readInput** function

- In the **readInput** function,

  - First, read number of elements into the memory cell pointed by **nPtr**.
  
  - Then, read elements into **arr**.
  
- Call **printNumbers** function for printing the array elements.

<br>

**Sample Run:**

```
Enter the number of elements:
> 5
Enter 5 elements:
> 1 2 3 4 5
Array elements: 1 2 3 4 5
```

<br>

### Part 2

Your task in this part is to fill in the missing function definitions in skeleton code **lab2part2.c**. You will use the same **readInput** and **printNumbers** functions from part I. **main** function will stay as it is.

Implement the following function in skeleton code **lab2part2.c**:

<br>

// Precondition: Let n represent number of elements in arr.

/\* Finds the mean of the arr and stores it in the memory cell pointed to by meanPtr. \*/

/\* Finds the variance of the arr and stores it in the memory cell pointed to by varPtr. \*/

**void findMeanVar(const int arr[], int n, double \*meanPtr, double \*varPtr);**

<br>

**Sample Run:**

```
Enter the number of elements:
> 9
Enter 9 elements:
> 1 2 3 4 5 6 7 8 9
Array elements: 1 2 3 4 5 6 7 8 9
Mean of all elements = 5.00
Variance of all elements = 6.67
```

<br>

### Part 3

Your task in this part is to fill in the missing function definitions in skeleton code **lab2part3.c**. You will use the same **readInput** and **printNumbers** functions from part I. **main** function will stay as it is.

Implement the following function in skeleton code **lab2part3.c**:

<br>

// Precondition: Let n represent number of elements in arr.

/\* Finds the smaller elements on the right side of each array element in arr and stores the counts into csmallerArr */

**void countSmallerArray(const int arr[], int n, int csmallerArr[])**

<br>

**Sample Run:**

```
Enter the number of elements:
> 6
Enter 6 elements:
> 6 7 4 3 5 2
Array elements: 6 7 4 3 5 2
Count Smaller Array elements: 4 4 2 1 1 0
```
