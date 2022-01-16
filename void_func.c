/*
 * Author: Tim Unkert
 * Purpose: Demo use of void function
 * in C.
 */

#include <stdio.h>

// function prototype
void say_hello(void);

int main()
{
    say_hello();
    return(0);
}

void say_hello(void)
{
    printf("Hello!\n");
}
