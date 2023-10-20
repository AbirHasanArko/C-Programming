//User-Defined Function to Find "Power of a Number"

#include<stdio.h>

// Function Prototype
float power(float base, float exponent);

// Main Function
int main() {
    float x, y;
    printf("Enter the base: ");
    scanf("%f", &x);
    printf("Enter the exponent: ");
    scanf("%f", &y);
    printf("%0.2f", power(x, y));    // Function Call
    return 0;
}

// Function Definition
float power(float base, float exponent){
    /* if 'x^-y' is an expression, where the exponent is negative:
    First, negate the exponent again to make it positive i.e. 'x^y'
    Then, inverse the value of 'x^y' i.e. (1/(x^y))
    x^-y = (1/(x^y)) */
    if(exponent < 0){
        return 1.0 / power(base, - exponent);
    }
    /* if 'x^-y' is an expression, where the exponent is '0':
    (Any Real or Complex number) ^ 0 = 1 */
    else if(exponent == 0){
        return 1.0;
    }
    /* if 'x^-y' is an expression, where x,y ∈ R:
    x^y = x*x*X*...... (y times)  */
    else{
        float result = 1.0;
        for(int i = 1; i <= exponent; i++){
            result *= base;
        }
        return result;
    }
}

/*---------------------------------------- Additional Information ----------------------------------------*/
/*
Library Function: pow(base, exponent);
Header File: <math.h>
----------------------------------------------------------------------------------------------------------
Description: Given two numbers base and exponent, the C++or C pow() function finds x raised to the power of y i.e. x^y. Basically in C/C++, the exponent value is calculated using the pow() function. The pow() function is used to calculate the power of a number in C/C++. It takes double as input and returns double as output.
We have to use #include<math.h> in C/C++  to use that pow() function in our C/C++ program.

This method takes only two arguments:
x: floating point base value
y: floating point power value
The power function returns the floating point value of x raised to the power y ( x^y ).
----------------------------------------------------------------------------------------------------------
Credit of Description: https://www.geeksforgeeks.org/power-function-c-cpp/
*/
  
  

