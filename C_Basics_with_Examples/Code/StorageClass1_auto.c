#include<stdio.h>
void main()
{
    auto int a = 10;
    {
        auto int a;
        printf("a: %d \n", a); //a = Garbage value
    }
    printf("a: %d \n", a);     //a = 10
}