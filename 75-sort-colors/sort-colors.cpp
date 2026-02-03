class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        for (int i:nums)
        {
            freq[i]++;
        }
        int j=0;
        int itr=0;
        while (itr<freq[0])
        {
            nums[j]=0;
            j++;
            itr++;
        }
        itr=0;
        while (itr<freq[1])
        {
            nums[j]=1;
            j++;
            itr++;
        }
        itr=0;
        while (itr<freq[2])
        {
            nums[j]=2;
            j++;
            itr++;
        }
    }
};