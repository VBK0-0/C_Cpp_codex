#include <stdio.h>
#include <stdlib.h>

char* read(void);

int main(void)
{
    char* name;
    name = read();
    printf("Welcome, %s\n", name);
    free(name);   // free allocated memory
    return 0;
}

char* read(void)
{
    char* name = malloc(50 * sizeof(char));  // allocate memory
    if (name == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    printf("Enter name: ");
    fgets(name, 50, stdin);
    return name;
}
