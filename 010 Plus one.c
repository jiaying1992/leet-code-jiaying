# Description
===================================================================================================
Given a non-negative integer represented as a non-empty array of digits, plus one to the integer.
You may assume the integer do not contain any leading zero, except the number 0 itself.
The digits are stored such that the most significant digit is at the head of the list.
----------------------------------------------------------------------------------------------------
# Solution
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i;
    int count=0;
    int *result;
    for(i=digitsSize-1; i>=0; i--)
    {
        if(digits[i]==9)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==digitsSize)
    {
        result=(int *)malloc(sizeof(int)*(count+1));
        *returnSize=count+1;
        result[0]=0;
        for(i=1;i<*returnSize; i++)
        {
            result[i]=digits[i-1];
        }
    }
    else
    {
        result=(int *)malloc(sizeof(int)*digitsSize);
        *returnSize=digitsSize;
        for(i=0; i<*returnSize; i++)
        {
            result[i]=digits[i];
        }
    }
    for(i=0; i<count; i++)
    {
        result[*returnSize-1-i]=0;
    }
    result[*returnSize-1-count]++;
    return result;
    
}
