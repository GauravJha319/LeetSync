class Solution {
public:
    int maxSum(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        int res=0;
        int alt_Res=-101;
        for (int i:nums)
        {
            if (freq[i]==0 && i>=0)
            {
                freq[i]++;
                res+=i;
            }
            if (i<0 && i>alt_Res) alt_Res=i;
        }
        if (freq[0]==0 && res==0) return alt_Res;
        return res;
    }
};