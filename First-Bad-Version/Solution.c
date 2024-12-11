// The API isBadVersion is defined for you.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int bad,low=1,mid,high=n;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        bad=isBadVersion(mid);
        if(bad==true)
        high=mid-1;
        else
        low=mid+1;
    }
    return low;
}
