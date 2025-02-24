class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ans;
        map<int,int> res;
        for (int i=0 ; i<nums.size() ; i++)
        {
            int temp=target-nums[i];
            if (res.find(temp) != res.end())
            {
                ans.push_back(i);
                ans.push_back(res[temp]);
            }
            else
            {
                res[nums[i]]=i;
            }
        }
        return ans;
    }
};