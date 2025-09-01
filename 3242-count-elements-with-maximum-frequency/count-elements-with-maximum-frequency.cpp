class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        int max=0;
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
            if (freq[i]>max) max=freq[i];
        }
        int ans=0;
        for (auto i:freq)
        {
            if (i.second==max)
            {
                ans+=max;
            }
        }
        return ans;
    }
};