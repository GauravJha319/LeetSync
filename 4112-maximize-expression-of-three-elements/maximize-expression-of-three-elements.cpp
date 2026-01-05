class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums)
    {
        int max1=INT_MIN , max2=INT_MIN , min1=INT_MAX;
        for (int i:nums)
        {
            if (i<min1) min1=i;
        }
        for (int i:nums)
        {
            if (i>=max1)
            {
                max2=max1;
                max1=i;
            }
            else if (i>max2) max2=i;
        }
        return max1+max2-min1;
    }
};