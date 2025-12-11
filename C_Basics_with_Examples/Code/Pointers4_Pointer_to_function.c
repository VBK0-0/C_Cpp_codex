#include<stdio.h>

int add(int x, int y);
int multiply(int x, int y, int z);

int main ()
{
    int r1, r2, r3, r4;
    // Declaring function pointer
    int (*ptr1) (int, int); 
    int (*ptr2) (int, int, int);

    r1 = add(10, 20);
    r2 = multiply(2, 3, 4);
    printf("%d ,%d\n", r1, r2);
    ptr1 = &add;
    r3 = ptr1(30,50);
    printf("%d\n", r3);
    ptr2 = &multiply;
    r4 = ptr2(2, 3, 4);
    printf("%d\n", r4);  
    return 0;                                 
}

int add(int x, int y)
{
    int z = x + y;
    return z;
}

int multiply(int x, int y, int z)
{
    int w = x*y*z;
    return w; 
}