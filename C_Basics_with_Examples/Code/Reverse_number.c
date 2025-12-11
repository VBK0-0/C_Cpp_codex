#include<stdio.h>
int main()
{
    long int n,temp, r, sum = 0;
    printf("Enter a positive number: ");
    scanf("%ld", &n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = sum*10 +r;
        n = n/10;
    }
    n = temp;
    printf("The reverse of %ld is: %ld", n, sum);
    return 0;
}