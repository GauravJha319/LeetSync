class Solution {
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int n=s1.size();
        int count=0;
        bool flag=true;
        unordered_map<char,int> s11;
        unordered_map<char,int> s22;
        for (int i=0 ; i<n ; i++)
        {
            s11[s1[i]]++;
            s22[s2[i]]++;
            if (s1[i]!=s2[i]) count++;
        }
        for (char ch='a' ; ch<='z' ; ch++)
        {
            if (s11[ch]!=s22[ch]) flag=0;
        }
        if ((count==0 || count==2)&&flag) return true;
        else return false;
    }
};