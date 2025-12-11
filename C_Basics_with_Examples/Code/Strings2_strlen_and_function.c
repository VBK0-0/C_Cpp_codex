#include <stdio.h>
#include <string.h>

int StringLength(char x[]) 
// Here x[] = x* i.e., it acts as a pointer. 
//x[] works with any size i.e., x[10], x[20], etc.
{
int i = 0, count = 0;

    while (x[i] != '\0')
    {
        if (x[i] != ' ' && x[i] != '\n')  // skip spaces and newline
            count++;

        i++;
    }

    return count;
}
int main()
{
    char x[20];
    unsigned int len1, len2;

    printf("Enter a string: ");
    fgets(x, sizeof(x), stdin); 
    /* fgets() used instead of gets() because:
    - It stops after filling the array.
    - It prevents buffer overflow.
    - It keeps the newline character so you know input length exactly.
    */
    len1 = strlen(x) - 1;  // Because fgets includes newline
    len2 = StringLength(x);

    printf("Length using strlen() = %d\n", len1);
    printf("Length without spaces using logic = %d\n", len2);

    return 0;
}