# Description
======================================================================================================================================
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
If the last word does not exist, return 0.
Note: A word is defined as a character sequence consists of non-space characters only.
For example, 
Given s = "Hello World",
return 5.
---------------------------------------------------------------------------------------------------------------------------------------
# Solution
int lengthOfLastWord(char* s) {
    int length=strlen(s);
    int index=0;
    int i;
    while(length>=0 && s[length-1]==' ')
    {
        length--;
    }
    for(i=0; i<length; i++)
    {
        if(s[i]!=' ')
        {
            index++;
        }
        else
        {
            index=0;
        }
    }
    return index;
}
