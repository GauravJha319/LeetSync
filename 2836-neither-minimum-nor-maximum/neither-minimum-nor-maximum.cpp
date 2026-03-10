class Solution {
public:
    int findNonMinOrMax(vector<int>& nums)
    {
        int max=INT_MIN , min=INT_MAX;
        for (int i:nums)
        {
            if (i<min) min=i;
            if (i>max) max=i;
        }
        for (int j:nums)
        {
            if (j!=min && j!=max) return j;
        }
        return -1;
    }
};