class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.size()!=t.size()) return false;
        vector<int> s_map(26,0);
        vector<int> t_map(26,0);
        for (int i=0 ; i<s.size() ; i++)
        {s_map[s[i]-'a']++;}
        for (int i=0 ; i<t.size() ; i++)
        {t_map[t[i]-'a']++;}
        for (int i=0 ; i<26 ; i++)
        {
            if (s_map[i]!=t_map[i]) return false;
        }
        return true;
    }
};