#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* link;
} NODE;

typedef NODE* PTR;

int main(void)
{
    PTR root = malloc(sizeof(NODE));

    if (root == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocation passed successfully\n");

    root->data = 10;
    root->link = NULL;

    free(root);
    return 0;
}


/*#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

main()
{
//struct Node* ptr;
typedef struct Node NODE;
typedef struct Node* PTR;

//ptr = (struct Node*) malloc(sizeof(struct Node));

//struct Node* root;
PTR root;

//root  = (struct Node*) malloc(sizeof(struct Node));
root = (PTR) malloc(sizeof(NODE));

}*/