class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if (nums.empty()) return 0;
        sort (nums.begin(),nums.end());
        int max=1 , temp=1;
        for (int i=1 ; i<nums.size() ; i++)
        {
            if (nums[i-1]==nums[i]-1) temp++;
            else if (nums[i-1]==nums[i]) continue;
            else if (temp>=max)
            {
                max=temp;
                temp=1;
            }
            else if (temp<max) temp=1;
        }
        if (temp>max) max=temp;
        return max;
    }
};