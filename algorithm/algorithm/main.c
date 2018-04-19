#include <stdio.h>
#include <stdlib.h>
/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter it returns -1.
 */
 int fibonacci(int);


int main()
{
    int n = 8;
    printf("The fibonacci number of %d is: %d\n", n, fibonacci(n));
}

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else if (number < 0)
        return -1;
    else
        return (fibonacci(number - 1) + fibonacci(number - 2));
}



