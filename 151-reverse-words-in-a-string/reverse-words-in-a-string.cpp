class Solution {
public:
    string reverseWords(string s)
    {
        vector<string> ans;
        string temp="";
        for (char ch:s)
        {
            if (ch==' ')
            {
                if (!temp.empty())
                {
                    ans.push_back(temp);
                    temp="";
                }
            }
            else
            {
                temp.push_back(ch);
            } 
        }
        if (!temp.empty()) ans.push_back(temp);
        string res="";
        for (int i=ans.size()-1 ; i>=0 ; i--)
        {
            res+=ans[i];
            if (i!=0) res+=" ";
        }
        return res;
    }
};