#include<stdio.h>
void main()
{
    typedef int my_int;
    my_int a = 10, b = 20, c;
    c = a + b;
    printf("Sum %d \n", c);
}