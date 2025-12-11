#include<stdio.h>

int fact(int n);

int main()
{
    int n, res;
    printf("Enter n value: ");
    scanf("%d", &n);
    res = fact(n);
    printf("Result is %d", res);
}
int fact(int n)
{
    int res;
    if(n ==0)
        res =1;
    else
        res = n*fact(n-1);
    return res;
}