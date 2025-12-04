#include<stdio.h>
main()
{
    int x = 10, y, z, a, b;
    y = ++x;
    printf("%d, %d\n", x, y); //11, 11

    x = 10, y = 10;
    y = x++;
    printf("%d, %d\n", x, y);

    x =10, y =20; 
    z = x++ * --y;
    printf("%d,%d,%d\n",x, y, z);
    
    x = 5;
    x = ++x + x++;
    printf("%d\n",x);

    a = 2, b = 3;
    b = a++ + b--;
    printf("%d, %d\n",a, b);
    a = a-- + ++b;
    printf("%d, %d\n",a, b);
    b = ++a + --b;
    printf("%d, %d\n",a, b);

}