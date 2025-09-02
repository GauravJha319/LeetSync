class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int>ans;
        unordered_map<int,int> freq;
        for (int i:nums) freq[i]++;
        vector<pair<int,int>> temp (freq.begin(),freq.end());
        sort(temp.begin(), temp.end(), [](pair<int,int> &a, pair<int,int> &b)
        {
            return a.second > b.second;
        });
        int i=0;
        for (auto x:temp)
        {
            if (i>=k) break;
            ans.push_back(x.first);
            i++;
        }
        return ans;
    }
};