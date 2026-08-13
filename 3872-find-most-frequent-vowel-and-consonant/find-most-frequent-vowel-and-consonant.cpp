class Solution {
public:
    int maxFreqSum(string s)
    {
        unordered_map<char,int> vowels;
        unordered_map<char,int> consotants;
        for (char ch:s)
        {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') vowels[ch]++;
            else consotants[ch]++;
        }
        int v=0, c=0;
        for (auto x:vowels)
        {
            if (x.second>v) v=x.second;
        }
        for (auto x:consotants)
        {
            if (x.second>c) c=x.second;
        }
        return v+c;
    }
};