class Solution {
public:
    int secondHighest(string s)
    {
        vector<int> nums;
        for (char c:s)
        {
            if (isdigit(c)) nums.push_back(c-'0');
        }
        sort (nums.begin(),nums.end(),greater<int>());
        for (int i=1 ; i<nums.size() ; i++)
        {
            if (nums[i]!=nums[i-1]) return nums[i];
        }
        return -1;
    }
};