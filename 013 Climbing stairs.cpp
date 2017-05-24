# Description
=================================================================================================
You are climbing a stair case. It takes n steps to reach to the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Note: Given n will be a positive integer.
-------------------------------------------------------------------------------------------------
# Solution
1.
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
        {
            return result[n]=n;
        }
        if(result[n]){return result[n];}
        else
        {
            return result[n]=climbStairs(n-1)+climbStairs(n-2);
        }
        
    }
    int result[1000]={0};
};
2.
class Solution{
public:
    int climbStairs(int n) {
    int a = 1, b = 1;
    while (n--)
        a = (b += a) - a;
    return a;
    }
}