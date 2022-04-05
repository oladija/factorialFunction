//This program will calculate the factorial of a number
#include <stdio.h>

int main()
{
    int factorial = 1;
    int i, input;

    printf("Enter a number: ");
    scanf("%d", &input);

    i = input;
    while(i > 1)
    {
        factorial *= i;
        i--;
    }

    printf("%d", factorial);

    return factorial;
}
