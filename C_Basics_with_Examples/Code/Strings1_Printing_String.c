#include<stdio.h>
main()
{
    char name[20];
    printf("Enter your name: ");
    gets(name); // Takes input until enter is pressed, and stores into an array.
    printf("Hi %s!! Welcome", name);
}