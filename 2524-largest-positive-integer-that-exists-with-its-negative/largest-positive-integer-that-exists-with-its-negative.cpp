class Solution {
public:
    int findMaxK(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            if (i<0) freq[i]++;
        }
        int max=-1;
        for (int i:nums)
        {
            if (i>0)
            {
                if (freq[-1*i]!=0 && i>max) max=i;
            }
        }
        return max;
    }
};