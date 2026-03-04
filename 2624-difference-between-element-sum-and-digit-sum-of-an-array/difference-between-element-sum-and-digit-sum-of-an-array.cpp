class Solution {
public:
    int dig_sum(int num)
    {
        int ans=0;
        while (num)
        {
            int digit=num%10;
            ans+=digit;
            num=num/10;
        }
        return ans;
    }
    int differenceOfSum(vector<int>& nums)
    {
        int digit=0 , ele=0;
        for (int i:nums)
        {
            ele+=i;
            digit+=dig_sum(i);
        }
        return abs(digit-ele);
    }
};