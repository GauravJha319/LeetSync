class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        int n=nums.size()/3;
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        vector<int> ans;
        for (auto i:freq)
        {
            if (i.second>n) ans.push_back(i.first);
        }
        return ans;
    }
};