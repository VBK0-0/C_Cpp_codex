#include<stdio.h>
#include<stdlib.h>
int main()
{
    int capacity =5, *stack;
    stack = (int*) calloc(capacity, sizeof(int));
    printf("Initial capacity: %d \n", capacity); 
    capacity++;
    stack = (void*) realloc(stack, capacity *sizeof(int));
    printf("Capacity after adding 1: %d \n", capacity); 
    capacity = capacity -2;
    printf("Capacity after subtracting 2: %d", capacity); 
    return 0;
}