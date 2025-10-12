class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator)
    {
        vector<string> ans;
        for (string s:words)
        {
            string temp="";
            for (int i=0 ; i<s.size() ; i++)
            {
                if (s[i]==separator && !temp.empty())
                {
                    ans.push_back(temp);
                    temp="";
                }
                else if (s[i]!=separator)
                {
                    temp=temp+s[i];
                } 
            }
            if (!temp.empty()) ans.push_back(temp);
        }
        return ans;
    }
};