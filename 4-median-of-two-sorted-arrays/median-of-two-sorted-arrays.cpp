class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int i=0 , j=0;
        vector<int> ans;
        while (i<nums1.size() && j<nums2.size())
        {
            if (nums1[i]<nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i]>nums2[j])
            {
                ans.push_back(nums2[j]);
                j++;
            }
            else
            {
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
        }
        while (i<nums1.size())
        {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j<nums2.size())
        {
            ans.push_back(nums2[j]);
            j++;
        }
        int temp=ans.size()/2;
        if (ans.size()%2==0)
        {
            double a=ans[temp];
            double b=ans[temp-1];
            return (a+b)/2;
        }
        else
        {
            return (double)ans[temp];
        }
    }
};