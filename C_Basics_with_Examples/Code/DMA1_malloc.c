#include<stdio.h>
#include<stdlib.h>
struct Emp
{
    int eno;
    char ename[20];
    float esal;
};
int main()
{
    struct Emp* ptr;
    ptr = (struct Emp*) malloc(sizeof(struct Emp)); //typecasting
    if(ptr==NULL)
    {
        printf("Out of memory error \n");
    }
    else
    {
        printf("Enter employee details: ");
        scanf("%d  %s %f", &ptr -> eno, ptr -> ename, &ptr -> esal);
        printf("The eno ename and esal are: '%d' '%s' '%f' ", ptr->eno, ptr->ename, ptr->esal);
    }
}