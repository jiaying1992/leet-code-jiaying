# Description
==================================================================================
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...
1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.
Note: The sequence of integers will be represented as a string.
-----------------------------------------------------------------------------------
# Solution
class Solution {
public:
    string countAndSay(int n) {
        if(n==0) return " ";
        if(n==1) return "1";
        std::string res="1";
        std::string s;
        while(--n)
        {
            int len=res.size();
            for(int j=0; j<len; j++)
            {
                int count=1;
                while(((j+1)<len) && (res[j]==res[j+1]))
                {
                    count++;
                    j++;
                }
                s+=std::to_string(count)+res[j];
            }
            res=s;
            s.clear();
        }
        return res;
    }
};
