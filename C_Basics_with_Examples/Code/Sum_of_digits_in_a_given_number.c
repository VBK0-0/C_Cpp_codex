#include<stdio.h>
int main()
{
    int n, r, sum =0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n<0)
    {
        printf("Invalid!\nPlease enter a positive integer:");
        scanf("%d",&n);
    }

        int temp =n;
        while(temp>0)
        {
            r = temp %10;
            sum = sum + r;
            temp = temp/10;
        }
        printf("The sum of the digits of %d is: %d ", n, sum);
}