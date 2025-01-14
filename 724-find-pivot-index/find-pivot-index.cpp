class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int ans=-1 , sum=0 , sumleft=0;
        for (int x : nums)
        {sum+=x;}
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (sumleft==sum-sumleft-nums[i])
            {ans=i; break;}
            sumleft+=nums[i];
        }
        return ans;
    }
};