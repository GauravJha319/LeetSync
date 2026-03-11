class Solution {
public:
    string freqAlphabets(string s)
    {
        unordered_map<char,char> map1={
            {'1','a'},
            {'2','b'},
            {'3','c'},
            {'4','d'},
            {'5','e'},
            {'6','f'},
            {'7','g'},
            {'8','h'},
            {'9','i'}
        };
        unordered_map<string,char> map2={
            {"10#",'j'},
            {"11#",'k'},
            {"12#",'l'},
            {"13#",'m'},
            {"14#",'n'},
            {"15#",'o'},
            {"16#",'p'},
            {"17#",'q'},
            {"18#",'r'},
            {"19#",'s'},
            {"20#",'t'},
            {"21#",'u'},
            {"22#",'v'},
            {"23#",'w'},
            {"24#",'x'},
            {"25#",'y'},
            {"26#",'z'},
        };
        string ans;
        for (int i=0 ; i<s.size() ; i++)
        {
            if (i<s.size()-2)
            {
                if (s[i+2]!='#')
                {
                    ans.push_back(map1[s[i]]);
                }
                else
                {
                    string temp;
                    temp.push_back(s[i]);
                    temp.push_back(s[i+1]);
                    temp.push_back(s[i+2]);
                    i += 2;
                    ans.push_back(map2[temp]);
                }
            }
            else
            {
                ans.push_back(map1[s[i]]);
            }
        }
        return ans;
    }
};