class Solution {
public:
    bool isMonotonic(vector<int>& nums)
    {
        vector<int> temp1=nums;
        sort (temp1.begin() , temp1.end());
        vector<int> temp2=nums;
        sort(temp2.begin(), temp2.end(), greater<int>());
        if (temp1==nums || temp2==nums) return true;
        else return false;
    }
};