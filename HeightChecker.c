#include <stdio.h>
#include <stdlib.h>

int heightChecker(int* heights, int heightsSize) 
{
    int temp;
    int i;
    int *copy;
    copy = (int *)malloc(sizeof(int)*heightsSize);
    if(copy == NULL)
    {
        return -1;
    }
    for(i = 0;i <heightsSize;i++)
    {
        copy[i] = heights[i];
    }
    for (i = 0; i < heightsSize-1; i++) 
    {
        for (int j = 0; j < heightsSize-i-1; j++) 
        {
            if (copy[j] > copy[j+1])
            {
                temp = copy[j];
                copy[j] = copy[j+1];
                copy[j+1] = temp;
            }
        }
    }
    int count = 0;
    for(i = 0;i< heightsSize;i++)
    {
        if(heights[i] != copy[i])
            count++;
    }
    return count;
    free(copy);
}