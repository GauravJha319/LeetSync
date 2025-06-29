class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector<int> result;
        int temp=nums[0];
        result.push_back(temp);
        for (int i=1 ; i<nums.size() ; i++)
        {
            temp+=nums[i];
            result.push_back(temp);
        }
        return result;
    }
};