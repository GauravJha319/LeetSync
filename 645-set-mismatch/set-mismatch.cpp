class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        int twice=1,zero=nums.size();
        for (int i=1 ; i<=nums.size() ; i++)
        {
            if (freq[i]==0) zero=i;
            if (freq[i]==2) twice=i;
        }
        return {twice,zero};
    }
};