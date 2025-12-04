#include<stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Please give the input:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
        
printf("The sum is: %d",sum);
}