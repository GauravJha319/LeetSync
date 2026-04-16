class Solution {
public:
    bool exist (string str, char x)
    {
        for (char ch:str)
        {
            if (ch==x) return true;
        }
        return false;
    }
    vector<int> findWordsContaining(vector<string>& words, char x)
    {
        vector<int> ans;
        for (int i=0 ; i<words.size() ; i++)
        {
            if (exist(words[i],x)) ans.push_back(i);
        }
        return ans;
    }
};