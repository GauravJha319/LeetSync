class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        for (auto j:freq)
        {
            if (j.second==1) return j.first;
        }
        return 0;
    }
};