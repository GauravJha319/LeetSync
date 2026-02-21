class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        int n=nums.size();
        unordered_set<int> seq;
        int longest=1;
        if (n==0) return 0;
        for (int i:nums)
        {
            seq.insert(i);
        }
        for (auto it : seq)
        {
            if (seq.find(it-1)==seq.end())
            {
                int cnt=1;
                int x=it;
                while (seq.find(x+1)!=seq.end())
                {
                    x++;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};