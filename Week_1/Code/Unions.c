#include<stdio.h>
#include<string.h>
union un
{
    short a;
    short b;
};

int main()
{
    union un var;
    var.a =10;  // Both a and b value point to 10
    printf("The value of b is: %d \n", var.b); 

    var.b =20;  // Both a and b value point to 20
    printf("The value of a is: %d \n", var.b);
}