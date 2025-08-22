#include <stdio.h>

// Function declarations
double sum(double x, double y);
double sub(double x, double y);
double mult(double x, double y);
double divide(double x, double y);

// Function definitions
double sum(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mult(double x, double y)
{
    return x * y;
}

double divide(double x, double y)
{
    if (y != 0)
        return x / y;
    else
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main()
{
    printf("Welcome to the two-number Calculator in C!\n");

    double a, b;
    printf("Enter a (First number): ");
    scanf("%lf", &a);

    printf("Enter b (Second number): ");
    scanf("%lf", &b);

    int choice;
    printf("Select Choice -\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("The sum is %lf\n", sum(a, b));
        break;
    case 2:
        printf("The subtraction is %lf\n", sub(a, b));
        break;
    case 3:
        printf("The multiplication is %lf\n", mult(a, b));
        break;
    case 4:
        printf("The division is %lf\n", divide(a, b));
        break;
    default:
        printf("Invalid choice!\n");
        break;
    }

    return 0;
}
