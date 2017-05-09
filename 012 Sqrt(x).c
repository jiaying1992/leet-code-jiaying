# Description
================================================================
Implement int sqrt(int x).
Compute and return the square root of x.
----------------------------------------------------------------
# Solution
class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        {
            return 0;
        }
       int left,right,result,mid;
       left=1;
       right=x;
       while(left<=right)
       {
           mid=left+(right-left)/2;
           if(mid<=x/mid)
           {
               left=mid+1;
               result=mid;
           }
           else
           {
               right=mid-1;
           }
       }
       return result;
    }
};