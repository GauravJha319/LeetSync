class Solution {
public:
    vector<int> dig (vector<int> ans, int i)
    {
        vector<int> temp;
        while (i)
        {
            int digit=i%10;
            i/=10;
            temp.push_back(digit);
        }
        for (int j=temp.size()-1 ; j>=0 ; j--) ans.push_back(temp[j]);
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums)
    {
        vector<int> ans;
        for (int i:nums)
        {
            ans=dig(ans,i);
        }
        return ans;
    }
};