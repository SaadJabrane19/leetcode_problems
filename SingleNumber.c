#include <stdio.h>
int singleNumber(int* nums, int numsSize)
{
    int i,j = 0;
    for (i = 0;i < numsSize;i++)
    {
        j ^= nums[i]; // Using XOR Operation
    }
    return j;
}
