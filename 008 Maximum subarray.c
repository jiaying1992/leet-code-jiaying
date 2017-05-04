# Description
==========================================================================================================
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.
----------------------------------------------------------------------------------------------------------
# Solution
int maxSubArray(int* nums, int numsSize) {
    int sum;
    sum=nums[0];
    int i,j,temp;
    for(i=0; i<numsSize; i++)
    {
        temp=nums[i];
        if(temp>sum)
        {
            sum=temp;
        }
        for(j=i+1; j<numsSize; j++)
        {
            temp+=nums[j];
            if(temp>sum)
            {
                sum=temp;
            }
        }
    }
    return sum;
}
