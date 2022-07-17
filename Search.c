#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, searchNum, arraySize, check = 0;
    int Array[6] = {1, 5, 67, 2, 98, 46};
    printf("Enter number to search for\n");
    scanf("%d", &searchNum);
    arraySize = (int)sizeof(Array) / (int)sizeof(int);
    printf("Array size %d\n", arraySize);
    for (i = 0; i <= arraySize; i++)
    {
        if (searchNum == Array[i])
        {
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("The number %d doesn't exist\n", searchNum);
    }
    else
    {
        printf("The number %d exists\n", searchNum);
    }
    // complexity is O(n) least complexity O(1) when the search number is at the start of the array
    return 0;
}