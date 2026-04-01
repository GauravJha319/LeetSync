class Solution {
public:
    int mySqrt(int x)
    {
        if (x==0 || x==1) return x;
        int st=0 , e=x;
        int ans=0;
        while (st<=e)
        {
            int mid=st+(e-st)/2;
            long square=(long)mid*(long)mid;
            if (square==x) return mid;
            else if (square<x)
            {
                ans=mid;
                st=mid+1;
            }
            else e=mid-1;
        }
        return ans;
    }
};