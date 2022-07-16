#include <stdio.h>
#include <stdlib.h>

void printing(int array[], int arraySize)
{
    int i;
    for (i = 0; i < arraySize; i++)
    {
        printf("%d\t", array[i]);
    }
}

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
    printf("Traversing the array....\tArray:\n");
    // complexity O(n)
    printing(array, arraySize);
    // inserting into the array
    // inserting at the beginning
    printf("\nEnter value to insert at the start\n");
    scanf("%d", &newElement);
    for (i = arraySize - 1; i >= 0; i--)
    {
        array[i + 1] = array[i];
    }
    array[0] = newElement;
    arraySize++;
    // complexity for inserting at the start O(n)
    printf("Inserting element at the start....\tNew Array:\n");
    printing(array, arraySize);
    // inserting in the middle
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
        printf("Inserting the element in the middle....\t New Array:\n");
        // complexity for inserting in the middle O(n)
        printing(array, arraySize);
    }
    // inserting at the end
    printf("\nEnter value to insert at the end\n");
    scanf("%d", &newElement);
    array[arraySize] = newElement;
    arraySize++;
    // complexity for inserting at the end O(1)
    printf("Inserting element at the end.....\tNew Array:\n");
    printing(array, arraySize);
    return 0;
}