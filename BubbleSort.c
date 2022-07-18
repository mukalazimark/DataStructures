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
    int arraySize, i, j, tempNum;
    int array[50];
    printf("Enter the preffered array size\n");
    scanf("%d", &arraySize);
    // getting the array
    for (i = 0; i < arraySize; i++)
    {
        printf("Enter array element\n");
        scanf("%d", &array[i]);
    }
    for (j = 0; j < arraySize - 1; j++)
    {
        for (i = 0; i < arraySize - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                tempNum = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tempNum;
            }
        }
    }
    printf("Sorting the array...\t New Array:\n");
    printing(array, arraySize);
    printf("\n");
    return 0;
}