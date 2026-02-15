class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char,int> freq1;
        for (char ch:ransomNote)
        {
            freq1[ch]++;
        }
        unordered_map<char,int> freq2;
        for (char ch:magazine)
        {
            freq2[ch]++;
        }
        for (auto i:freq1)
        {
            if (i.second>freq2[i.first]) return false;
        }
        return true;
    }
};