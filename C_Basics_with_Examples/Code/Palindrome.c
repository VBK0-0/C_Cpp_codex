#include<stdio.h>
int main()
{
    int n, r, temp, sum =0;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        r = temp%10;
        sum = sum*10 + r;
        temp = temp/10; 
    }
    if(n==sum)
        printf("%d is a Palindrome.", n);
    else    
        printf("%d is not a palindrome.", n);
}