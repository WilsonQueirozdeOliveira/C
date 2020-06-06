#include <stdio.h>  //Standard Library for performing input end output
#include <stdlib.h> //Standard Library for performing general functions

int main()
{
    int a = 9, b = 4, c;
    c = a + b;
    printf("a+b = %d \n", c);
    c = a - b;
    printf("a-b = %d \n", c);
    c = a * b;
    printf("a*b = %d \n", c);
    c = a / b;
    printf("a/b = %d \n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d \n", c);
    system("pause");
    return 0;
}