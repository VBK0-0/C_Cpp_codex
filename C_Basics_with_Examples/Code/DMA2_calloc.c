#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *arr;
    arr = (int *) calloc(n, sizeof(int));
    if(arr==NULL)
    printf("No Memory \n");
    else
    {
        printf("Array elements are: \n");
        for(i=0; i<n;i++)
        {
            printf("%d", *(arr+i));
        }
    }
}