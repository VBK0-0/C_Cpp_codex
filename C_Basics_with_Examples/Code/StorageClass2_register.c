#include<stdio.h>
void main()
{
    int n;
    register  int sum = 0, i;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
        printf("%d", sum);
    }
    printf("Sum: %d \n", sum);
}