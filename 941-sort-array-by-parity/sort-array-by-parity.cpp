class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums)
    {
        int st=0 , e=nums.size()-1;
        while (st<=e)
        {
            if (nums[st]%2!=0 && nums[e]%2==0)
            {
                swap(nums[st],nums[e]);
                st++;
                e--;
            }
            if (nums[st]%2==0) st++;
            if (nums[e]%2!=0) e--;
        }
        return nums;
    }
};