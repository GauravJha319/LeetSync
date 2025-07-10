class Solution {
public:
    char findTheDifference(string s, string t)
    {
        unordered_map <char,int> slen;
        for (char ch:s) slen[ch]++;
        unordered_map <char,int> tlen;
        for (char ch:t) tlen[ch]++;
        char temp='a';
        while (true)
        {
            if (slen[temp]!=tlen[temp]) return temp;
            temp++;
        }
    }
};