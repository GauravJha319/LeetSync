class Solution {
public:
    int subarraySum(vector<int>& nums)
    {
        int result=0;
        for (int i=0 ; i<nums.size() ; i++)
        {
            int start=max(0,i-nums[i]);
            for (start ; start<=i ; start++)
            {
                result+=nums[start];
            }
        }
        return result;
    }
};