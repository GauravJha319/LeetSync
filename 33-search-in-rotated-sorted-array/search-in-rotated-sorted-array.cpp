class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int st=0 , e=nums.size()-1;
        int mid=st+(e-st)/2;
        while (st<=e)
        {
            if (nums[mid]==target) return mid;
            if (nums[st]<=nums[mid])
            {
                if (nums[st]<=target && target<=nums[mid]) e=mid-1;
                else st=mid+1;
            }
            else
            {
                if (nums[mid]<=target && target<=nums[e]) st=mid+1;
                else e=mid-1; 
            }
            mid=st+(e-st)/2;
        }
        return -1;
    }
};