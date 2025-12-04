#include<stdio.h>
main()
{
    char c;
    short s;
    printf("size of char: %d byte(s)\n", sizeof(c));      // size of char: 1 byte(s)
    printf("size of short: %d byte(s)\n",sizeof(s));      // size of short: 2 byte(s)
    printf("size of float: %d byte(s)\n",sizeof(float));  // size of float: 4 byte(s)
}