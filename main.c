/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* read and print array (check: scanf needs &n) */
void readPrint() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

/* sum of array */
void arraySum() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("sum of elements: %d\n", sum);
}

/* average of elements */
void arrayAvg() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    printf("avg of elements: %.2f\n", avg);
}

/* maximum of elements */
void arrayMax() {
    int n, i, max;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    printf("Maximum of element: %d\n", max);
}

/* minimum of elements */
void arrayMin() {
    int n, i, min;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    min = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    printf("Minimum of element: %d\n", min);
}

/* two dimensional array */
void print2D() {
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &arr[i][j]);
    printf("output is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

/* sum of two dimensional array */
void sum2D() {
    int row, col, i, j, sum = 0;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    printf("sum is: %d\n", sum);
}

int main() {
    // Call ONE at a time, since each reads its own input
    arraySum();
    // arrayAvg();
    // arrayMax();
    // arrayMin();
    // print2D();
    // sum2D();
    return 0;
}