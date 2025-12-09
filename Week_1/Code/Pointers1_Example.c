#include<stdio.h>
int main()
{
    unsigned int i =100;
    unsigned int* ptr;
    ptr = &i;
    printf("%u \n", i);     //100
    printf("%p \n", ptr);
    printf("%p \n", &i);
    printf("%p \n",&ptr);
    printf("%u \n", *ptr);  //100
    printf("%u \n", *(&i)); //100
}