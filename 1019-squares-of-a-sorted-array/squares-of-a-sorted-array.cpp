class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> ans;
        bool flag=0;
        int i=0;
        if (nums[0]<0) flag=1;
        if (flag)
        {
            for (i ; i<nums.size() ; i++)
            {
                if (nums[i]>=0) break;
            }
        }
        int j=i-1;
        while (j>=0 && i<nums.size())
        {
            if (nums[j]*nums[j]>nums[i]*nums[i])
            {
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else if (nums[j]*nums[j]<nums[i]*nums[i])
            {
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
            else
            {
                ans.push_back(nums[i]*nums[i]);
                i++;
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while (j>=0)
        {
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        while (i<nums.size())
        {
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        return ans;
    }
};