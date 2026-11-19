/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/* 1: square of stars */
void p1(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("*");
}

/* 2: right triangle */
void p2(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("*");
}

/* 3: inverted right triangle */
void p3(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("*");
}

/* 4: pyramid (fixed) */
void p4(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col < 2 * row + 1; col++) printf("*");
    }
}

/* 5: parallelogram leaning right */
void p5(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < row; col++) printf(" ");
        for (int col = 0; col < n; col++) printf("*");
    }
}

/* 6: parallelogram leaning left */
void p6(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col < n; col++) printf("*");
    }
}

/* 7: right-aligned triangle */
void p7(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col < n - row - 1; col++) printf(" ");
        for (int col = 0; col <= row; col++) printf("*");
    }
}

/* 8: butterfly top half (fixed gap) */
void p8(int n) {
    for (int row = 0; row < n; row++, printf("\n")) {
        for (int col = 0; col <= row; col++) printf("*");
        for (int col = 0; col < 2 * (n - row - 1); col++) printf(" ");
        for (int col = 0; col <= row; col++) printf("*");
    }
}

/* 9: n x n of 1s */
void p9(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("1 ");
}

/* 10: each row repeats row number */
void p10(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%d ", row + 1);
}

/* 11: each row 1..n */
void p11(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%d ", col + 1);
}

/* 12: 1, 12, 123... */
void p12(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", col + 1);
}

/* 13: n..1 shrinking (fixed spacing) */
void p13(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("%d ", n - col);
}

/* 14: Floyd's triangle */
void p14(int n) {
    int c = 1;
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", c++);
}

/* 15: inverted 1..k */
void p15(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n - row; col++) printf("%d ", col + 1);
}

/* 16: continuous numbers, 2-digit */
void p16(int n) {
    int m = 1;
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col < n; col++) printf("%02d ", m++);
}

/* 17: row number repeated row+1 times */
void p17(int n) {
    for (int row = 0; row < n; row++, printf("\n"))
        for (int col = 0; col <= row; col++) printf("%d ", row + 1);
}

int main(void) {
    int n, choice;
    void (*patterns[])(int) = {p1, p2, p3, p4, p5, p6, p7, p8, p9,
                               p10, p11, p12, p13, p14, p15, p16, p17};

    printf("Enter pattern number (1-17): ");
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 17) {
        printf("Invalid choice\n");
        return 1;
    }
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid n\n");
        return 1;
    }

    patterns[choice - 1](n);
    return 0;
}