class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums)
    {
        vector<int> ans(2);
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        int left=0, pairs=0;
        for (auto i: freq)
        {
            int temp=i.second;
            pairs+=temp/2;
            left+=temp%2;
        }
        ans[0]=pairs;
        ans[1]=left;
        return ans;
    }
};