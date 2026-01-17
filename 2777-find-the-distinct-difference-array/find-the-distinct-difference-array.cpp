class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums)
    {
        vector<int> ans;
        for (int i=0 ; i<nums.size() ; i++)
        {
            unordered_map<int,int> freq1;
            int prefix=0 , suffix=0;
            for (int j=0 ; j<=i ; j++)
            {
                if (freq1[nums[j]]==0)
                {
                    prefix++;
                    freq1[nums[j]]++;
                }
            }
            unordered_map<int,int> freq2;
            for (int j=i+1 ; j<nums.size() ; j++)
            {
                if (freq2[nums[j]]==0)
                {
                    suffix++;
                    freq2[nums[j]]++;
                }
            }
            ans.push_back(prefix-suffix);
        }
        return ans;
    }
};