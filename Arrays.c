#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraySize, i, insertPos, newElement;
    int array[50];
    printf("Enter the preffered array size\n");
    scanf("%d", &arraySize);
    for (i = 0; i < arraySize; i++)
    {
        printf("Enter array element\n");
        scanf("%d", &array[i]);
    }
    // traversing the array
    printf("Traversing the array....\n");
    for (i = 0; i < arraySize; i++)
    {
        printf("%d\t", array[i]);
        // complexity O(n)
    }
    // inserting into the array

    printf("\nEnter the position where you want to insert\n");
    scanf("%d", &insertPos);
    printf("Enter element to insert\n");
    scanf("%d", &newElement);
    insertPos = insertPos - 1;
    if (insertPos > arraySize || insertPos < 0)
    {
        printf("Can't insert beyond desired position/n");
    }
    else
    {

        for (i = arraySize - 1; i >= insertPos; i--)
        {
            array[i + 1] = array[i];
        }
        array[insertPos] = newElement;
        arraySize++;
        printf("Inserting the element....\t New Array:\n");
        for (i = 0; i < arraySize; i++)
        {
            printf("%d\t", array[i]);
            // complexity in the middle & start O(n), at the end O(1)
        }
    }

    return 0;
}