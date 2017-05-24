# Description
================================================================
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
----------------------------------------------------------------
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       /* int i=0, j=0;
        while(n>0 && (i+j<m+n))
        {
            if(i<m && j<n)
            {
                nums1[i+j]=(nums1[i]<=nums2[j]) ? nums1[i++] : nums2[j++];
            }
            if(i==m && j<n)
            {
                nums1[i+j]=nums2[j++];
            }
            if(j==n && i<m)
            {
                nums1[i+j]=nums1[i++];
            }
            
        }*/
         int i = m - 1, j = n - 1, tar = m + n - 1;
        while (j >= 0) {
            nums1[tar--] = i >= 0 && nums1[i] > nums2[j] ? nums1[i--] : nums2[j--];
        }
    }
};