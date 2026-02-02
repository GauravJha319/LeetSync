class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        int cnt=0;
        int n=nums.size();
        for (int i=0 ; i<n ; i++)
        {
            int temp=nums[i];
            if (temp==k) cnt++;
            for (int j=i+1 ; j<n ; j++)
            {
                temp+=nums[j];
                if (temp==k) cnt++;
            }
        }
        return cnt;
    }
};