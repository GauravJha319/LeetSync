class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int size=nums.size()+1;
        int i=0;
        int sum=0;
        for (int j=0 ; j<nums.size() ; j++)
        {
            sum+=nums[j];
            if (sum<target) continue;
            while (sum>=target && i<nums.size())
            {
                size=min(size,j-i+1);
                sum-=nums[i];
                i++;
            }
        }
        if (size==nums.size()+1) return 0;
        return size;
    }
};