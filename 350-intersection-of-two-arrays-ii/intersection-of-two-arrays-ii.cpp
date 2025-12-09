class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        unordered_map<int,int> freq1;
        unordered_map<int,int> freq2;
        for (int i:nums1) freq1[i]++;
        for (int i:nums2) freq2[i]++;
        if (nums1.size()>nums2.size())
        {
            for (int i=0 ; i<nums1.size() ; i++)
            {
                int temp=min(freq1[nums1[i]],freq2[nums1[i]]);
                ans.insert(ans.end(), temp, nums1[i]);
                freq1[nums1[i]]=0;
                freq2[nums1[i]]=0;
            }
        }
        else
        {
            for (int i=0 ; i<nums2.size() ; i++)
            {
                int temp=min(freq1[nums2[i]],freq2[nums2[i]]);
                ans.insert(ans.end(), temp, nums2[i]);
                freq1[nums2[i]]=0;
                freq2[nums2[i]]=0;
            }
        }
        return ans;
    }
};