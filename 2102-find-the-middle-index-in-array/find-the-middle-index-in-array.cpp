class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int sum=0;
        for (int i:nums) sum+=i;
        int left=0,right=sum;
        for (int i=0 ; i<nums.size() ; i++)
        {
            right-=nums[i];
            if (right==left) return i;
            left+=nums[i];
        }
        return -1;
    }
};