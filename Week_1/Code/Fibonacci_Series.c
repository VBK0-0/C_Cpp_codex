#include<stdio.h>
int main()
{
    int i, a=0, b=1,c,  n;
    printf("Enter a limit: ");
    scanf("%d", &n);
   if(n>0)
    {
        for(i=1; i<=n; i++)
        {
            printf("%d\n",a);
            c = a + b;
            a = b;
            b = c;
        }
    }
}