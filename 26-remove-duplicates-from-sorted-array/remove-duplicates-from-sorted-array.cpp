class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int k=0;
        unordered_map<int,int> freq;
        for (int i=0 ; i<nums.size() ; i++)
        {
            if (freq[nums[i]]==0)
            {
                freq[nums[i]]++;
                k++;
            }
            else if (freq[nums[i]]==1)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return k;
    }
};