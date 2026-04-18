class Solution {
public:
    int sum (int x)
    {
        int ans=0;
        while (x)
        {
            int d=x%10;
            ans+=d;
            x=x/10;
        }
        return ans;
    }
    int minElement(vector<int>& nums)
    {
        int ans=INT_MAX;
        for (int i:nums)
        {
            ans=min(ans,sum(i));
        }
        return ans;
    }
};