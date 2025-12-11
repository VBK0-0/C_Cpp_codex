#include<stdio.h>
int main()
{
    int limit, n, i, sum;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(n=1;n<=limit;n++)
    {
        sum = 0;
        for(i=1; i<n; i++)
        {
            if(n%i == 0)
            {
                sum = sum +i;
            }
        }
        if(n==sum)
        printf("%d, ", n);
    }
}