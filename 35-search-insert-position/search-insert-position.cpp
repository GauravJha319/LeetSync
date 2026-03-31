class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int st=0 , e=nums.size()-1;
        int mid=st+(e-st)/2;
        while (st<=e)
        {
            if (nums[mid]==target) return mid;
            if (nums[mid]>target) e=mid-1;
            else if (nums[mid]<target) st=mid+1;
            mid=st+(e-st)/2;
        }
        return st;
    }
};