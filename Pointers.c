// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>  //Standard Library for performing input end output
#include <stdlib.h> //Standard Library for performing general functions

int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    c = 1;

    printf("c: %d\n", c);             // Output: 1
    printf("pc: %d\n", *pc);          // Ouptut: 1 // *pc is pointing to c, then this print the value of c
    printf("address of c: %p\n", &c); // print the address of c

    int var = 5;
    printf("var: %d\n", var);

    printf("address of var: %p\n", &var); // Notice the use of & before var
    system("pause");
    return 0;
}