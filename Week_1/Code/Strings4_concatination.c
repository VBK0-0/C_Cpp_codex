#include<stdio.h>
#include<string.h>
int main()
{
    int l1, l2, i;
    char s1[30], s2[30];
    printf("Enter string-1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter string-2: ");
    fgets(s2, sizeof(s2), stdin);    
    l1 = strlen(s1) - 1;
    l2 = strlen(s2) - 1;
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    for(i=0; i<=l2; i++)
    {
        s1[l1+i] = s2[i];
    }
    printf("The concatinated string is: %s", s1);
}