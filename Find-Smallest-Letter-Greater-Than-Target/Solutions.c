char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int mid,low=0,high=lettersSize-1,res=letters[0];
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(letters[mid]>(int)target)
        {
        res=letters[mid];
        high= mid-1;
        }
        else
        low=mid+1;
    }
    return res;
}
