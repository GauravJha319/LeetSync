class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups)
    {
        vector<string> ans;
        bool flag=groups[0];
        for (int i=0 ; i<groups.size() ; i++)
        {
            if (flag==groups[i])
            {
                ans.push_back(words[i]);
                flag=!flag;
            }
        }    
        return ans;    
    }
};