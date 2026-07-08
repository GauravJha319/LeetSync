class Solution {
public:
    bool is_prime (int x)
    {
        if (x==0 || x==1) return false;
        for (int i=2 ; i<=sqrt(x) ; i++)
        {
            if (x%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums)
    {
        int n=nums.size();
        int ans=0;
        for (int i=0 ; i<n ; i++)
        {
            if (is_prime(nums[i][i]) && nums[i][i]>ans) ans=nums[i][i];
        }
        int i=0,j=n-1;
        while (i<n && j>=0)
        {
            if (is_prime(nums[i][j]) && nums[i][j]>ans) ans=nums[i][j];
            i++;j--;
        }
        return ans;
    }
};