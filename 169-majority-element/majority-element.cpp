class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        int req=nums.size()/2;
        for (int i:nums)
        {
            freq[i]++;
            if (freq[i]>req) return i;
        }
        return 0;
    }
};