class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends)
    {
        unordered_map<int,int> exist;
        for (int i:friends) exist[i]++;
        vector<int> ans;
        for (int i:order)
        {
            if (exist[i]) ans.push_back(i);
        }
        return ans;
    }
};