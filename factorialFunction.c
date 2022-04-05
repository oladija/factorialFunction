//This program will find the factorial of a number using functions


#include <stdio.h>
int factorial(int input) //This is the function that calculates the factorial
{
    int factorial = 1;

    int i = input;
    while(i > 1)
    {
        factorial *= i;
        i--;
    }

    return factorial;
}

int main()
{
    printf("Please enter the numbers whose factorials you want to sum\n");
    int userInput1, userInput2, x, y, sum;
    //Receive the input from the user
    printf("Enter first number: ");
    scanf("%d", &userInput1);

    getchar();

    printf("Enter the second number: ");
    scanf("%d", &userInput2);

    x = factorial(userInput1); //Call the function to calculate the factorial of the first input and pass it into x
    y = factorial(userInput2); //Call the function to calculate the factorial of the second input and pass it into y
    sum = x + y; //Sum the factorial of the two inputs

    printf("The sum of the factorial of %d and %d is %d", userInput1, userInput2, sum);

    return 0;
}    

    


 

    
