class Solution {
public:
    bool possible (int mid,vector<int>& piles,int h)
    {
        long long x=0;
        for (int i=0 ; i<piles.size() ; i++)
        {
            x+=((piles[i]+mid-1LL)/mid);
        }
        if (x<=h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h)
    {
        sort (piles.begin(),piles.end());
        int n=piles.size();
        int st=1 , e=piles[n-1] , ans;
        int mid=st+(e-st)/2;
        while (st<=e)
        {
            if (possible(mid,piles,h))
            {
                ans=mid;
                e=mid-1;
            }
            else st=mid+1;
            mid=st+(e-st)/2;
        }
        return ans;
    }
};