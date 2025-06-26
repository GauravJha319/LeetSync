class Solution {
public:
    int minimumRightShifts(vector<int>& nums)
    {
        int n=nums.size();
        vector<int> unsorted=nums;
        sort (nums.begin(),nums.end());
        int count=0;
        int j=n;
        if (unsorted==nums) return 0;
        while (j>=0)
        {
            int temp=unsorted[n-1];
            for (int i=n-1 ; i>=1 ; i--)
            {
                unsorted[i]=unsorted[i-1];
            }
            unsorted[0]=temp;
            count++;
            j--;
            if (unsorted==nums) return count;
        }
        return -1;
    }
};