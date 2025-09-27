class Solution {
public:
    bool makeEqual(vector<string>& words)
    {
        int n=words.size();
        unordered_map<char,int> freq;
        for (int i=0 ; i<n ; i++)
        {
            string temp=words[i];
            for (char ch:temp)
            {
                freq[ch]++;
            }
        }
        for (auto x:freq)
        {
            int temp=x.second;
            if (temp%n!=0) return false;
        }
        return true;
    }
};