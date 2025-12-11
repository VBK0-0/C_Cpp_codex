#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char x[30];
    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin);

    while(x[i] !='\0')
    {
        if(x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] + 32;
        }
        i++;
    }
    printf("The lowercase string is: %s", x);
    return 0;
}