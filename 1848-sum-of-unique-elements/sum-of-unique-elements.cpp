class Solution {
public:
    int sumOfUnique(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        int ans=0;
        for (int i:nums)
        {
            if (freq[i]==0)
            {
                ans+=i;
                freq[i]++;
            }
            else if (freq[i]==1)
            {
                ans-=i;
                freq[i]++;
            }
        }
        return ans;
    }
};