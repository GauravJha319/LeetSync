class Solution {
public:
    int findClosestNumber(vector<int>& nums)
    {
        sort (nums.begin(),nums.end());
        int ans=nums[0], min=abs(0-nums[0]);
        for (int i=1 ; i<nums.size() ; i++)
        {
            if (abs(0-nums[i])<=min && nums[i]>ans)
            {
                ans=nums[i];
                min=abs(0-nums[i]);
            }
        }
        return ans;
    }
};