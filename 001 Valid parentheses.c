# Description
=======================================================================================================================
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
-----------------------------------------------------------------------------------------------------------------------
# Solution
bool isValid(char* s) {
    int len=strlen(s);
    int num=0;
    int i,j;
    char *p;
    p=(char *)malloc(sizeof(char)*len);
    if(len%2==1 || s[0]==']' || s[0]=='}' || s[0]==')')
    {
        return false;
    }
    for(i=0;i<len; i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            p[num]=s[i];
            num++;
        }
        else
        {
            if(!((s[i]=='}' && p[num-1]=='{') || (s[i]==']' && p[num-1]=='[') || (s[i]==')' && p[num-1]=='(')))
            {
                return false;
            }
            num--;
        }
    }
    if(num!=0)
    {
        return false;
    }
    return true;
    free(p);
}
