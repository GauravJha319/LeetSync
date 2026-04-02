class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int n=nums.size();
        if (nums.size()==1) return 0;
        if (nums[0]>nums[1]) return 0;
        if (nums[n-1]>nums[n-2]) return n-1;
        int st=0 , e=n-1;
        int mid=st+(e-st)/2;
        while (st<=e)
        {
            if (mid==n-1 && nums[mid-1]<nums[mid]) return mid;
            else if (mid==n-1 && nums[mid-1]>nums[mid]) e=mid-1;
            else if (mid==0 && nums[1]<nums[0]) return 0;
            else if (mid==0 && nums[1]>nums[0]) st=mid+1;
            else if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if (nums[mid]<nums[mid+1]) st=mid+1;
            else if (nums[mid]<nums[mid-1]) e=mid-1;
            mid=st+(e-st)/2;
        }
        return e;
    }
};