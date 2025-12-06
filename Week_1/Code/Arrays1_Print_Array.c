#include<stdio.h>
int main()
{
    int n, i; 
    printf("What is the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    } 
}