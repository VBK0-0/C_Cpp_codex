/*Pattern:
*
**
***
****
*****
*/

//METHOD - 1: Using increment

#include<stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

//METHOD - 2: Using decremeent

    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }

//METHOD - 3: Using both increment and decrement

    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

// METHOD - 4: Using both decrement and increment

    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    