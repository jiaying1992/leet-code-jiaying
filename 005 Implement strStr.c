# Description
=============================================================================================================
Implement strStr().
Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
-------------------------------------------------------------------------------------------------------------
# Solution
int strStr(char* haystack, char* needle) {
    int haylen=0, needlen=0;
    int i,j;
    haylen=strlen(haystack);
    needlen=strlen(needle);
    if(needlen==0)
    {
        return 0;
    }
    for(i=0; i<haylen-needlen+1; i++)
    {
        j=0;
        while((haystack[i+j]==needle[j]) &&(j<needlen))
        {
            j++;
        }
        if(j==needlen)
        {
            return i;
        }
        
    }
    return -1;
}
