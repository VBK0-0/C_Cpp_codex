#include<stdio.h>
#include<string.h>
struct employee
{
    int eno;  // 4 - bytes
    char ename[20]; // 20 - bytes 
    float esal;  // 4 - bytes
};
main()
{
    struct employee e= {5, "Bala", 1,00,000}; 
    printf("Size of Employee: %lld \n", sizeof(e));  // Size of Employee: 28 
    printf("Size of employee: %lld \n", sizeof(struct employee)); // Size of Employee: 28 
}