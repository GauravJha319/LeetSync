class Solution {
public:
    int digit_sum (int x)
    {
        int sum=0;
        while (x)
        {
            int digit=x%10;
            x=x/10;
            sum+=digit;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums)
    {
        for (int i=0 ; i<nums.size() ; i++)
        {
            int temp=digit_sum(nums[i]);
            if (temp==i) return i;
        }
        return -1;
    }
};