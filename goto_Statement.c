// Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.

#include <stdio.h>  //Standard Library for performing input end output
#include <stdlib.h> //Standard Library for performing general functions
int main()
{
    const int maxInput = 5;
    int i;
    double number, average, sum = 0.0;

    for (i = 1; i <= maxInput; ++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);
        if (number < 0.0)
            goto jump;
        sum += number;
    }
jump:
    average = sum / (i - 1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    system("pause");
    return 0;
}