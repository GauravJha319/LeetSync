class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for (int i:nums1) freq1[i]++;
        for (int i:nums2) freq2[i]++;
        int ans1=0 , ans2=0;
        for (int i:nums1)
        {
            if (freq2[i]>0) ans1++;
        }
        for (int j:nums2)
        {
            if (freq1[j]>0) ans2++;
        }
        return {ans1,ans2};
    }
};