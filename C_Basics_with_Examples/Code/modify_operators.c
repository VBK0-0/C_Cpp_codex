#include<stdio.h>
main()
{
    int x = 10, y, z, a, b;
    y = ++x;
    printf("%d, %d\n", x, y); //11, 11

    x = 10, y = 10;
    y = x++;
    printf("%d, %d\n", x, y); //11, 10

    x =10, y =20; 
    z = x++ * --y;
    printf("%d,%d,%d\n",x, y, z); //11,19,190
    
    x = 5;
    x = ++x + x++;
    printf("%d\n",x); //13

    a = 2, b = 3;
    b = a++ + b--;
    printf("%d, %d\n",a, b); //3, 5
    a = a-- + ++b;
    printf("%d, %d\n",a, b); //9, 6
    b = ++a + --b;
    printf("%d, %d\n",a, b); //10, 15

}