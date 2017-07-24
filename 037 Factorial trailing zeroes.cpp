# Description
============================================================================================
Given an integer n, return the number of trailing zeroes in n!.
Note: Your solution should be in logarithmic time complexity.
---------------------------------------------------------------------------------------------
# Solution
class Solution {
public:
    int trailingZeroes(int n) {
        n = n==0? 0 : (n/5)+trailingZeroes(n/5);
        return n;
        
    }
};