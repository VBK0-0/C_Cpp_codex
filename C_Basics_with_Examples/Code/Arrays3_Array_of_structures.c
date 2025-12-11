#include<stdio.h>
#include<string.h>
struct student
{
    int sno;
    char sname[20];
    float smarks[4];
};

int main()
{
    int i=0 , j, n=0 ;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student s[n];


    for(i=0; i<n; i++)
    {
        printf("Enter the %d student's roll number: ",i+1) ;
        scanf("%d", &s[i].sno);
        getchar();

        printf("Enter the %d student's name: ", i+1);
        fgets(s[i].sname, sizeof(s[i].sname), stdin);
        s[i].sname[strcspn(s[i].sname, "\n")] = '\0';


        for(j = 0; j<4; j++)
        {
            printf("Enter the student's marks in subject - %d: ", j+1);
            scanf("%f", &s[i].smarks[j]);
        }
    }
    printf("The students details are as follows: \n");

    for(i=0; i<n; i++)
    {
        printf("The %d student's roll number is: %d \n",i+1, s[i].sno) ;
        printf("The %d student's name: %s \n", i+1, s[i].sname);

        for(j = 0; j<4; j++)
        {
            printf("The %d student's marks in subject - %d is: %.2f: \n",i+1, j+1,s[i].smarks[j]);
        }
    }
    return 0;
}