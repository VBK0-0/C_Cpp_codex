#include<stdio.h>
#include<string.h>
void swap(int* x, int* y);
int main()
{
    int a = 10, b = 20;
    printf("Before swap: \t %d \t %d \n", a, b);
    swap(&a, &b);
    printf("After swap using call by reference: \t %d \t %d \n", a, b);
}

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap: \t %d \t %d \n", *x, *y);
}