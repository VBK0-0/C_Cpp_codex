#include<stdio.h>
int main()
{
    int n, i, fact = 1;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("The factorial of %d using increment is: ", n);
    for(i = 1; i <= n; i++)
    {
        printf("%d", i);           // print the number
        if(i < n) printf("*");     // print '*' only between numbers
        fact *= i;
    }
    printf(" = %d\n", fact);
    fact =1;
    printf("The factorial of %d using decrement is: ", n);
    for(i = n; i >= 1; i--)
    {
        printf("%d", i);
        if(i > 1) printf("*");
        fact *= i;
    }
    printf(" = %d\n", fact);
}