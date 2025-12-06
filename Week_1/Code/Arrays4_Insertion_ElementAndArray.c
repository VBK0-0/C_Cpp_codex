#include<stdio.h>
int main()
{
    int arr[50], q, n, i;
    printf("Enter the size of the main array: ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter %d element:", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The main array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\nDo you wish to insert: \n1.Element \n2.Array \nEnter 1 or 2: ");
    scanf("%d", &q);
    if(q==1)
    {
        int key, loc;
        printf("Enter the element you wish to insert: ");
        scanf("%d", &key);
        printf("Enter index location to insert the element: ");
        scanf("%d", &loc);
       
        for(i =n-1; i>=loc;i--)
        {
            arr[i+1] =arr[i];
        }
        arr[loc] = key;
        printf("The new array is: ");
        for(i =0; i < n+1;i++)
        {
            printf("%d ", arr[i]);
        }
    }

    if(q==2)
    {
        int m;
        int loc;
        printf("Enter the size of the new array to be inserted: ");
        scanf("%d", &m);
        int newarr[m];
        printf("Enter the array elements: \n");
        for(i=0;i<m;i++)
        {
        printf("Enter %d element:", i+1);
        scanf("%d", &newarr[i]);
        }
        printf("The new array is: ");
        for(i=0;i<m;i++)
        {
            printf("%d ", newarr[i]);
        } 

        printf("\nEnter location of index to insert in the main array: ");
        scanf("%d", &loc);
        for(i = n-1;i>=loc;i--)
        {
            arr[i+m] = arr[i];
        }
        for(i=0;i<m;i++)
        {
            arr[loc+i]= newarr[i];
        }
        printf("The new array is: ");
        for(i =0; i< n+m;i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid input");
    }
    
}