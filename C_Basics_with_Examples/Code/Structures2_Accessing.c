#include<stdio.h>
#include<string.h>
struct Emp
{
    int eno;
    char ename[20];
    float esal;
};

int main()
{
    struct Emp e; 
    
    printf("Enter the Employee Number: ");
    scanf("%d", &e.eno);

    getchar(); // consume newline after scanf

    printf("Enter the Employee Name: ");
    fgets(e.ename, sizeof(e.ename), stdin);

    // Remove newline from fgets
    e.ename[strcspn(e.ename, "\n")] = '\0';

    printf("Enter the Employee salary: ");
    scanf("%f", &e.esal);

    printf("Employee details: \n");
    printf("Employee Number is: %d \n", e.eno);
    printf("Employee Name is: %s \n", e.ename);
    printf("Employee salary is: %.2f \n", e.esal);

    return 0;
}