class Solution {
public:
    int distinctAverages(vector<int>& nums)
    {
        unordered_map<float,int> freq;
        int count=0;
        while (nums.size()!=0)
        {
            int ind_min=0 , ind_max=0;
            float min=INT_MAX, max=0;
            for (int i=0 ; i<nums.size() ; i++)
            {
                if (nums[i]<min)
                {
                    min=nums[i];
                    ind_min=i;
                }
                if (nums[i]>max)
                {
                    max=nums[i];
                    ind_max=i;
                }
            }
            float avg=(min+max)/2;
            if (freq[avg]==0)
            {
                freq[avg]++;
                count++;
            }
            nums.erase (nums.begin()+ind_min);
            if (ind_min<ind_max) nums.erase (nums.begin()+ind_max-1);
            else nums.erase (nums.begin()+ind_max);
        }
        return count;
    }
};