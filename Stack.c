#include <stdio.h>
#include <stdlib.h>

void printing(int stack[], int stackSize)
{
    int i;
    // travessing the stack O(n)
    for (i = stackSize - 1; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
}
int main()
{
    int stackSize, i, element, reply;
    int stack[50];
    printf("Enter the preffered stack size\n");
    scanf("%d", &stackSize);
    // getting the stack
    for (i = 0; i < stackSize; i++)
    {
        printf("Enter stack element\n");
        scanf("%d", &stack[i]);
    }
    // adding to the stack complexity O(1)
    printf("Enter a value to add to the stack\n");
    scanf("%d", &element);
    stack[i] = element;
    stackSize++;
    printf("Adding to the stack...\t New Stack:\n");
    printing(stack, stackSize);
    // removing from the stack complexity O(1)
    printf("\nPress 1 to remove from the stack\n");
    scanf("%d", &reply);
    if (reply == 1)
    {
        stackSize--;
        printf("Removing from the stack...\t New Stack\n");
        printing(stack, stackSize);
    }
    else
    {
        printf("Invalid response\n");
    }
    printf("\n");
    return 0;
}