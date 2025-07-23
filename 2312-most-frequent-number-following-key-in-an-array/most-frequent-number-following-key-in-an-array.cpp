class Solution {
public:
    int mostFrequent(vector<int>& nums, int key)
    {
        unordered_map<int,int> occ;
        for (int i=1 ; i<nums.size() ; i++)
        {
            if (nums[i-1]==key) occ[nums[i]]++;
        }
        int max=0;
        int ans=0;
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (occ[nums[i]]>max)
            {
                max=occ[nums[i]];
                ans=nums[i];
            }
        }
        return ans;
    }
};