#include<stdio.h>
struct Emp
{
    int eno;
    char ename[20];
    float esal;
};

main()
{
typedef struct Emp Employee;
//struct Emp e;
Employee e = {1, "Bala Krishna", 100000};
printf("%d %s %.2f", e.eno, e.ename, e.esal);
}

