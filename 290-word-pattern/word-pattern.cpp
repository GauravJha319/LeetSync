class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        unordered_map<char,string> map;
        unordered_map<string,char> rev_map;
        vector<string> sm;
        string temp="";
        for (int i=0 ; i<s.size() ; i++)
        {
            if (s[i]==' ')
            {
                sm.push_back(temp);
                temp="";
            }
            else
            {
                temp+=s[i];
            }
        }
        sm.push_back(temp);
        if (pattern.size() != sm.size()) return false;
        for (int i=0 ; i<sm.size() ; i++)
        {
            if (map[pattern[i]] != sm[i] && map[pattern[i]].size()!=0) return false;
            else map[pattern[i]]=sm[i];

            if (rev_map[sm[i]] != pattern[i] && rev_map[sm[i]]!='\0') return false;
            else rev_map[sm[i]]=pattern[i];
        }
        return true;
    }
};