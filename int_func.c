/*
 * Author: Tim Unkert
 * Purpose: Demo use of function that
 * returns integer
 */

#include <stdio.h>

// function prototypes
int add(int num_1, int num_2);
int subtract(int num_1, int num_2);
int prod(int num_1, int num_2);
int quot(int num_1, int num_2);

int main()
{
    int n_1, n_2, s, d, p, q;
    printf("Enter a number: ");
    scanf("%d", &n_1);
    printf("Enter another number: ");
    scanf("%d", &n_2);
    s = add(n_1, n_2);
    d = subtract(n_1, n_2);
    p = prod(n_1, n_2);
    q = quot(n_1, n_2);
    printf("The sum of the two numbers is %d.\n", s);
    printf("The difference of the two numbers is %d.\n", d);
    printf("The product of the two numbers is %d.\n", p);
    printf("The quotient of the two numbers is %d.\n", q);
    return(0);
}

int add(int num_1, int num_2)
{
    int sum;
    sum = num_1 + num_2;
    return sum;
}

int subtract(int num_1, int num_2)
{
    int diff;
    diff = num_1 - num_2;
    return diff;
}

int prod(int num_1, int num_2)
{
    int product;
    product = num_1 * num_2;
    return product;
}

int quot(int num_1, int num_2)
{
    float quot;
    int quotient;
    quot = num_1 / num_2;
    quotient = (int) quot;
    return quotient;
}
