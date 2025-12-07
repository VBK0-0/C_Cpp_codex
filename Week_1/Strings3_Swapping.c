#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i = 0; 
    char temp;
    printf("Enter the word: ");
    fgets(str, sizeof(str), stdin);
    int j = strlen(str)-1;
    while(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;  

    }    
    printf("The reverse string is: %s", str);
    return 0;
}