/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *res;
    int i, j;

    *returnSize = 2;
    res =(int *)malloc(2 * (sizeof(int)));

    i = 0;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                res[0] = i;
                res[1] = j;
                return(res);
            }
            j++;
        }
        i++;
    }
    return (0);
}