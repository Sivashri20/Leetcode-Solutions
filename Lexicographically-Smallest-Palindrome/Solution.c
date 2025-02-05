char* makeSmallestPalindrome(char* s) {
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=s[--len])
        {
        if(s[i]<s[len])
        s[len]=s[i];
        else
        s[i]=s[len];
        }

    }
    return s;
}
