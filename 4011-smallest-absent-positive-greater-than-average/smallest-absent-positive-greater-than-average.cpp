class Solution {
public:
    int smallestAbsent(vector<int>& nums)
    {
        unordered_map<int,int> freq;
        int sum=0;
        for (int i:nums)
        {
            freq[i]++;
            sum+=i;
        }
        int temp=nums.size();
        int avg=sum/temp;
        int j;
        if (avg<=0) j=1;
        else j=avg+1;
        while (true)
        {
            if (freq[j]==0) return j;
            j++;
        }
    }
};