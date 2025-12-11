#include<stdio.h>
int main()
{
    int n, i, large;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    } 
    printf("The largest element in the array is: %d", large);
}