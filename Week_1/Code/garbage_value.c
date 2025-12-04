#include<stdio.h>
#include<conio.h>
main()
{
    short x = 32769;
    unsigned short y = -4;
    unsigned short z = 65538;
    unsigned short k = -32772;
    printf("%d\n",x);   //-32767
    printf("%u\n",y);   //65532
    printf("%u\n",z);   //2
    printf("%d\n",z);   //2
    printf("%u\n",k);   //32764
    printf("%d\n",k);   //32764
}