class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        vector<int> res;
        int word=0;
        for (int i=0 ; i<s.size() ; i++)
        {
            if (s[i]==' ' && word!=0)
            {
                res.push_back(word);
                word=0;
            }
            else if (s[i]!=' ') word++;
        }
        if (word!=0) res.push_back(word);
        int n=res.size();
        return res[n-1];
    }
};