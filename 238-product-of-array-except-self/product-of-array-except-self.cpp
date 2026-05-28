class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int prod=1;
        for (int i=0 ; i<nums.size() ; i++)
        {
            prod*=nums[i];
            left[i]=prod;
        }
        prod=1;
        for (int i=n-1 ; i>=0 ; i--)
        {
            prod*=nums[i];
            right[i]=prod;
        }
        vector<int> ans(n);
        ans[0]=right[1];
        for (int i=1 ; i<n-1 ; i++)
        {
            ans[i]=left[i-1]*right[i+1];
        }
        ans[n-1]=left[n-2];
        return ans;
    }
};