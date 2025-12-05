class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        int max=nums[0];
        int ans=0;
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (nums[i]>max)
            {
                max=nums[i];
                ans=i;
            }
        }
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (nums[i]*2>max && i!=ans) return -1;
        }
        return ans;
    }
};