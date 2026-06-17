class Solution {
public:
    bool even_digits (int x)
    {
        int count=0;
        while (x)
        {
            count++;
            x/=10;
        }
        if (count%2==0) return true;
        return false;
    }
    int findNumbers(vector<int>& nums)
    {
        int ans=0;
        for (int i:nums)
        {
            if (even_digits(i)) ans++;
        }
        return ans;
    }
};