# Description
===================================================================
Given two binary strings, return their sum (also a binary string).
For example,
a = "11"
b = "1"
Return "100".
--------------------------------------------------------------------
# Solution
char* addBinary(char* a, char* b) {
    int l1,l2,i,j,temp,len;
    l1=strlen(a);
    l2=strlen(b);
    len=(l1>=l2)?l1:l2;
    char *crr=(char *)malloc(sizeof(char)*(len+1));
    int *num=(int *)malloc(sizeof(int)*(len+1));
    
    temp=0;
    for(i=0;i<l1&&i<l2;i++)
    {
        num[i]=a[l1-i-1]-'0'+b[l2-i-1]-'0'+temp;
        temp=num[i]/2;
        num[i]=num[i]%2;
    }
    if(l1<l2)
    {
         for(i;i<l2;i++)
        {
            num[i]=b[l2-i-1]-'0'+temp;
           
            temp=num[i]/2;
            num[i]=num[i]%2;
            
        }
    }
    if(l1>l2)
    {
         for(i;i<l1;i++)
        {
            num[i]=a[l1-i-1]-'0'+temp;
           
            temp=num[i]/2;
            num[i]=num[i]%2;
           
        }
    }
    if(temp>0){num[i]=temp;i++;}
    for(j=0;j<i;j++)
        crr[j]=num[i-j-1]+'0';
    crr[i]='\0';
    return crr;

}
