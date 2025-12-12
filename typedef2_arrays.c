#include<stdio.h>
main()
{
    int i;
    typedef int Array[5];
    Array x = {10, 20, 30, 40, 50};
    printf("Array elements are: \n");
    for(i = 0; i<5; i++)
    {
        printf("%d\n", x[i]);
    }
}