class Solution {
public:
    int minimumCost(vector<int>& nums)
    {
        int ans=nums[0];
        int min=nums[1] , min2=nums[2];
        for (int i=2 ; i<nums.size() ; i++)
        {
            if (nums[i]<=min2 && nums[i]<=min)
            {
                min2=min;
                min=nums[i];
            }
            else if (nums[i]<=min2 && nums[i]>=min) min2=nums[i];
        }
        return ans+min+min2;
    }
};