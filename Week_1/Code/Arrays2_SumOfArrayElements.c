#include<stdio.h>
int main()
{
    int n, i, sum =0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n; i++)         
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
        sum = sum +arr[i];
    }
    printf("The sum is = %d \n", sum);
}