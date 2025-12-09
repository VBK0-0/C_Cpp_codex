#include<stdio.h>
#include<string.h>
struct employee
{
    int eno;  // 4 - bytes
    char ename[20]; // 20 - bytes 
    float esal;  // 4 - bytes
};
int main()
{
    struct employee e= {5, "Bala", 100000.0f}; 
    printf("Size of Employee: %zu \n", sizeof(e));  // Size of Employee: 28 
    printf("Size of employee: %zu \n", sizeof(struct employee)); // Size of Employee: 28 
    return 0;
}