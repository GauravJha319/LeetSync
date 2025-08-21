class Solution {
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char,int> freq;
        for (char ch:s)
        {
            freq[ch]++;
        }
        int temp=freq[s[0]];
        for (char ch:s)
        {
            if (freq[ch]!=temp && freq[ch]!=0) return false;
        }
        return true;
    }
};