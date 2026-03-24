class Solution {
public:
    int averageValue(vector<int>& nums)
    {
        int n=0 , sum=0;
        for (int i:nums)
        {
            if (i%2==0 && i%3==0)
            {
                sum+=i;
                n++;
            }
        }
        if (n==0) return 0;
        int ans=sum/n;
        return ans;
    }
};