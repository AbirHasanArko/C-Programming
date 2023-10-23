//User-Defined Function to Find "Square Root of a Number"

#include <stdio.h>

// Function Prototype
double squareRoot(double num);

// Main Function
int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number < 0) {
        printf("Square root is not defined for negative numbers.\n");
    } 
    else {
        double result = squareRoot(number);    // Function Call
        printf("Square root of %.2lf is approximately %.2lf\n", number, result);
    }

    return 0;
}

// Function Definition
double squareRoot(double num) {
    if (num == 0 || num == 1) {
        return num;
    }

    double x0 = num; // Initial guess
    double x1 = (x0 + num / x0) / 2.0; // First approximation

    while (x1 != x0) {
        x0 = x1;
        x1 = (x0 + num / x0) / 2.0;
    }

    return x1;
}

/* In this program, the Babylonian method (Heron's Formula) was used to iteratively approximate the square root. 
The algorithm continues the iteration until x1 is equal to x0, which indicates that we have reached a good approximation. */



/*--------------------------------------------- Additional Information ---------------------------------------------*/
/*
Library Function: double sqrt(double arg);
Header File: <math.h>
----------------------------------------------------------------------------------------------------------------------
Description: The sqrt() function takes a single argument (in double) and returns its square root (also in double).
----------------------------------------------------------------------------------------------------------------------
Credit of Description: https://www.programiz.com/c-programming/library-function/math.h/sqrt
*/
