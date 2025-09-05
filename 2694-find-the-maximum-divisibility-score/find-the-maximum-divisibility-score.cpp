class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors)
    {
        int ans=divisors[0];
        int count_max=0;
        for (int i=0 ; i<divisors.size() ; i++)
        {
            int count=0;
            for (int j=0 ; j<nums.size() ; j++)
            {
                if (nums[j]%divisors[i]==0) count++;
            }
            if (count>count_max)
            {
                ans=divisors[i];
                count_max=count;
            }
            else if (count_max==count)
            {
                ans=min(ans,divisors[i]);
            }
        }
        return ans;
    }
};