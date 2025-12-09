#include<stdio.h>
#include<string.h>
struct employee
{
    int eno;
    char ename[20];
    float esal;
};
int main()
{
    char cp1;
    char* cp2;
    int ip1;
    int* ip2;
    struct employee sep1 = {5, "Bala", 100000.0f}; 
    struct employee* sep2;
    printf("The size of char is: %zu \n", sizeof(cp1));  //The size of char is: 1 
    printf("The size of char* is: %zu \n", sizeof(cp2)); //The size of char* is: 8 (not 1)
    printf("The size of int is: %zu \n", sizeof(ip1));   //The size of int is: 4
    printf("The size of int* is: %zu \n", sizeof(ip2));  //The size of int* is: 8 (not 4)
    printf("The size of emp is: %zu \n", sizeof(sep1));  //The size of emp is: 28
    printf("The size of emp* is: %zu \n", sizeof(sep2)); //The size of emp* is: 8 (not 28)
    return 0;
}