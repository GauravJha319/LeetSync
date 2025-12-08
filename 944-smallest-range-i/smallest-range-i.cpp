class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k)
    {
        if (nums.size()==0) return 0;
        int max=0 , min=INT_MAX;
        for (int i:nums)
        {
            if (i>max) max=i;
            if (i<min) min=i;
        }
        if (max-min<=2*k) return 0;
        else return (max-k)-(min+k);
    }
};