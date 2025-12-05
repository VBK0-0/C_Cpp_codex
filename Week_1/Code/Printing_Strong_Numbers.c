#include<stdio.h>
int main()
{
    long int limit, n, i, temp, r, fact, sum;
    printf("Enter the limit: ");
    scanf("%ld", &limit);
    for(n=1; n<=limit; n++)
    {
        temp = n;
        sum = 0;
        while(temp>0)
        {
              r = temp%10;
            fact = 1;
            for(i = r; i>=1; i--)
            {
                fact = fact*i;
            }
            sum = sum + fact;
            temp = temp/10;
        }
        if(n==sum)
        printf("%ld, ",n);
    } 
}