class Solution {
public:
    int rearrangeCharacters(string s, string target)
    {
        unordered_map<char,int> freqt;
        for (char ch:target)
        {
            freqt[ch]++;
        }
        unordered_map<char,int> freqs;
        for (char ch:s)
        {
            freqs[ch]++;
        }
        int min=INT_MAX;
        for (char i='a' ; i<='z' ; i++)
        {
            if (freqt[i]==0) continue;
            if (min>freqs[i]/freqt[i]) min=freqs[i]/freqt[i];
        }
        return min;
    }
};