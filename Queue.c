#include <stdio.h>
#include <stdlib.h>

void printing(int queue[], int queueSize)
{
    int i;
    // travessing the queue O(n)
    for (i = 0; i < queueSize; i++)
    {
        printf("%d\t", queue[i]);
    }
}
int main()
{
    int queueSize, i, element, reply;
    int queue[50];
    printf("Enter the preffered queue size\n");
    scanf("%d", &queueSize);
    // getting the queue
    for (i = 0; i < queueSize; i++)
    {
        printf("Enter queue element\n");
        scanf("%d", &queue[i]);
    }
    // adding to the queue complexity O(1)
    printf("Enter a value to add to the queue\n");
    scanf("%d", &element);
    queue[i] = element;
    queueSize++;
    printf("Adding to the queue...\t New Queue:\n");
    printing(queue, queueSize);
    // removing from the queue complexity O(1)
    printf("\nPress 1 to remove from the queue\n");
    scanf("%d", &reply);
    if (reply == 1)
    {
        queueSize--;
        printf("Removing from the queue...\t New Queue\n");
        printing(queue, queueSize);
    }
    else
    {
        printf("Invalid response\n");
    }
    printf("\n");
    return 0;
}