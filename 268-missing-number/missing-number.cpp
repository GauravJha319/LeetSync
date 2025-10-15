class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        int i=0;
        for ( ; i<=nums.size() ; i++)
        {
            if (freq[i]!=1) return i;
        }
        return i;
    }
};